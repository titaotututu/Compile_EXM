%union {            /*定义词法单元的值的类型*/
    struct TreeNode* node;
}

%{
    #include "ASTCommon.hpp"
    extern struct TreeNode* root;
    extern int codeLine;
    extern int yylex (void);      /*用于获取下个词法单元*/
    extern bool isSuccess;
    extern char *yytext;
    void yyerror (char const *s);   /*错误处理函数*/
    bool hasSyntaxError=false;
%}

/*bison声明部分*/

%token <node> INT
%token <node> FLOAT
%token <node> ID



%right <node> ASSIGNOP     
%left <node> OR
%left <node> AND
%left <node> RELOP
%left <node> PLUS MINUS
%left <node> STAR DIV
%right <node> NOT
%left <node> LP RP LB RB DOT
%precedence <node> ELSE

%token <node> STRUCT RETURN IF WHILE SEMI COMMA TYPE LC RC

/*非终结符类型*/
%type <node> Program ExtDefList ExtDef ExtDecList Specifier
    StructSpecifier OptTag Tag VarDec FunDec VarList ParamDec
    CompSt StmtList Stmt DefList Def DecList Dec Exp Args
    ErrorSemi ErrorRp ErrorRb ErrorRc                               /*符号缺失*/

%start Program                   

%%
/*语法规则部分*/

ErrorSemi
    : error SEMI { 
        printf("Error type B at Line %d: Missing \";\".\n", codeLine);
        $$ = $2;
        }
    | SEMI { $$ = $1; }
    ;

ErrorRp
    : error RP { 
        printf("Error type B at Line %d: Missing \")\".\n", codeLine);
        $$ = $2; }
    | RP { $$ = $1; }
    ;

ErrorRb
    : error RB { 
        printf("Error type B at Line %d: Missing \"]\".\n", codeLine);
        $$ = $2; }
    | RB { $$ = $1; }
    ;

ErrorRc
    : error RC { 
        printf("Error type B at Line %d: Missing \"}\".\n", codeLine);
        $$ = $2; }
    | RC { $$ = $1; }
    ;

Program
    : ExtDefList {
        createNode($$, "Program", codeLine);   /*$$表示当前语义值，即Program*/
        $$->children.emplace_back($1);            /*表示第一个规则的语义值 ExtDefList*/
        updateNodeLine($$);
        root = $$;
    }
    ;
ExtDefList   /*外部定义列表*/
    : ExtDef ExtDefList {
        createNode($$, "ExtDefList", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | %empty { $$ = nullptr; }
    ;
ExtDef          /*外部定义*/
    : Specifier ExtDecList ErrorSemi {
        createNode($$, "ExtDef", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Specifier ErrorSemi {               
        createNode($$, "ExtDef", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | Specifier FunDec CompSt {         /*函数定义*/
        createNode($$, "ExtDef", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    ;
ExtDecList                              /*外部变量列表*/
    : Dec {  
        createNode($$, "ExtDecList", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | Dec COMMA ExtDecList {  
        createNode($$, "ExtDecList", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    ;
Specifier
    : TYPE {
        createNode($$, "Specifier", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | StructSpecifier {                 /*结构体类型*/
        createNode($$, "Specifier", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    ;
StructSpecifier
    : STRUCT OptTag LC DefList ErrorRc {
        createNode($$, "StructSpecifier", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        $$->children.emplace_back($5);
        updateNodeLine($$);
    }
    | STRUCT Tag {
        createNode($$, "StructSpecifier", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    ;
OptTag                      /*可选结构体名称*/
    : ID {
        createNode($$, "OptTag", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | %empty { $$ = nullptr; }
    ;
Tag
    : ID {
        createNode($$, "Tag", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    ;

VarDec                          /*变量声明*/
    : ID {
        createNode($$, "VarDec", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | VarDec LB INT ErrorRb {          /*数组变量*/
        createNode($$, "VarDec", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        updateNodeLine($$);
    }
    ;
FunDec                              /*函数声明*/
    : ID LP VarList ErrorRp {
        createNode($$, "FunDec", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        updateNodeLine($$);
    }
    | ID LP ErrorRp {
        createNode($$, "FunDec", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    ;
VarList
    : ParamDec COMMA VarList {
        createNode($$, "VarList", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | ParamDec {
        createNode($$, "VarList", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    ;
ParamDec
    : Specifier VarDec {
        createNode($$, "ParamDec", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    ;
CompSt                      /*符合语句--函数体*/
    : LC DefList StmtList ErrorRc {
        createNode($$, "CompSt", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        updateNodeLine($$);
    }
    ;
StmtList
    : Stmt StmtList {
        createNode($$, "StmtList", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | %empty { $$ = nullptr; }
    ;
Stmt
    : Exp ErrorSemi {                   /*a=b+1*/
        createNode($$, "Stmt", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | CompSt {                          /*{int a; a=1}*/
        createNode($$, "Stmt", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | RETURN Exp ErrorSemi {            /*return a;*/
        createNode($$, "Stmt", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | IF LP Exp ErrorRp Stmt {             /*if语句*/
        createNode($$, "Stmt", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        $$->children.emplace_back($5);
        updateNodeLine($$);
    }
    | IF LP Exp ErrorRp Stmt ELSE Stmt {    /*if-else语句*/
        createNode($$, "Stmt", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        $$->children.emplace_back($5);
        $$->children.emplace_back($6);
        $$->children.emplace_back($7);
        updateNodeLine($$);
    }
    | WHILE LP Exp ErrorRp Stmt {           /*while语句*/
        createNode($$, "Stmt", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        $$->children.emplace_back($5);
        updateNodeLine($$);
    }
    ;

DefList                                 /*局部变量定义列表*/
    : Def DefList {
        createNode($$, "DefList", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | %empty { $$ = nullptr; }
    ;
Def                                      /*单个变量*/
    : Specifier DecList ErrorSemi {
        createNode($$, "Def", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    ;
DecList                                 /*变量声明列表*/
    : Dec {
        createNode($$, "DecList", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | Dec COMMA DecList {
        createNode($$, "DecList", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    ;
Dec                                        /*单个变量声明*/
    : VarDec {
        createNode($$, "Dec", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | VarDec ASSIGNOP Exp {
        createNode($$, "Dec", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    ;

Exp                                        /*表达式*/
    :Exp ASSIGNOP Exp {                     /*赋值 a=b*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp AND Exp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp OR Exp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp RELOP Exp {                   /*关系运算*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp PLUS Exp {            /*算数表达式*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp MINUS Exp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp STAR Exp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp DIV Exp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | LP Exp ErrorRp {              /*括号表达式*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | MINUS Exp {                   /*负数*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | NOT Exp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        updateNodeLine($$);
    }
    | ID LP Args ErrorRp {          /*函数调用表达式*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        updateNodeLine($$);
    }
    | ID LP ErrorRp {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }   
    | Exp LB Exp ErrorRb {          /*数组访问表达式*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        $$->children.emplace_back($4);
        updateNodeLine($$);
    }
    | Exp DOT ID {                  /*结构体成员表达式*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | ID {                          /*变量名*/
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | INT {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    | FLOAT {
        createNode($$, "Exp", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    ;
Args                        /*函数调用的参数列表*/
    : Exp COMMA Args {  
        createNode($$, "Args", codeLine);
        $$->children.emplace_back($1);
        $$->children.emplace_back($2);
        $$->children.emplace_back($3);
        updateNodeLine($$);
    }
    | Exp {
        createNode($$, "Args", codeLine);
        $$->children.emplace_back($1);
        updateNodeLine($$);
    }
    ;
    
%%

void yyerror (char const *s)
{
    isSuccess = false;
    /*printf("Error type B at Line %d: %s\n", codeLine, s); */
}
