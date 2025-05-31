%option noyywrap

%{
#include<string>
#include "ASTCommon.hpp"   /*自定义头文件*/
#include "cminus.tab.h"
using namespace std;

extern bool isSuccess;
int commentDepth=0; /*多行注释嵌套深度*/
int codeLine = 1;  /*行号-用于打印错误信息*/

int stoiChange(const char* str,int base=10);  /*将字符串转换成整数*/
float stofChange(const char* str);  /*将字符串转换成浮点数*/
%}

WORD [a-zA-Z0-9_]  

INT 0|[1-9][0-9]*{WORD}*
INT_OCT 0[0-9]+{WORD}*     
INT_HEX 0[xX][0-9a-fA-F]*{WORD}*  
FLOAT {INT}\.{INT}
SIMPLE_FLOAT ({INT}\.|\.{INT}|{FLOAT}){WORD}*
FLOAT_E ({SIMPLE_FLOAT}|{INT})[Ee][+-]?{INT}*


SEMI ;
COMMA ,
ASSIGNOP =
RELOP >|<|>=|<=|==|!=
PLUS \+
MINUS \-
STAR \*
DIV \/
AND &&
OR \|\|
DOT \.
NOT \!
TYPE int|float
LP \(
RP \)
LB \[
RB \]
LC \{
RC \}
STRUCT struct
RETURN return
IF if
ELSE else
WHILE while

ID [_a-zA-Z]{WORD}*  

%x COMMENTS    
    
%%            

"//".* { }                         
"/*" { 
    commentDepth++;
    if (commentDepth > 1) {
        printf("Error type A at Line %d: Nested comments are not allowed. Current depth: %d\n", codeLine, commentDepth);
        isSuccess = false;
    }
    BEGIN(COMMENTS); }

<COMMENTS>"/*" { 
    commentDepth++;
    if (commentDepth > 1) {
        printf("Error type A at Line %d: Nested comments are not allowed. Current depth: %d\n", codeLine, commentDepth);
        isSuccess = false;
    }
}

<COMMENTS>"*/" { 
    commentDepth--;
    if(commentDepth==0){
        BEGIN(INITIAL); 
    }
} 
<COMMENTS>\n { codeLine++; }
<COMMENTS>. { }
<COMMENTS><<EOF>> { 
    if (commentDepth > 0) {
        printf("Error type A at Line %d: Unterminated comment. Current depth: %d\n", codeLine, commentDepth);
        isSuccess = false;
    }
    BEGIN(INITIAL);  // 强制退出 COMMENTS 模式
}


{INT} { createNodeT(yylval.node, codeLine, "INT", stoiChange(yytext), TreeNodeType::intVal); return INT; }
{INT_OCT} { createNodeT(yylval.node, codeLine, "INT", stoiChange(yytext, 8), TreeNodeType::intVal); return INT; }
{INT_HEX} { createNodeT(yylval.node, codeLine, "INT", stoiChange(yytext, 16), TreeNodeType::intVal); return INT; }
{SIMPLE_FLOAT} { createNodeT(yylval.node, codeLine, "FLOAT", stofChange(yytext), TreeNodeType::floatVal); return FLOAT; }
{FLOAT_E} { createNodeT(yylval.node, codeLine, "FLOAT", stofChange(yytext), TreeNodeType::floatVal); return FLOAT; }


{TYPE} { createNodeT(yylval.node, codeLine, "TYPE", yytext[0]=='i'? TreeNodeType::intType :TreeNodeType::floatType); return TYPE; }

{SEMI} { createNodeT(yylval.node, codeLine, "SEMI", TreeNodeType::other); return SEMI; }
{COMMA} { createNodeT(yylval.node, codeLine, "COMMA", TreeNodeType::other); return COMMA; }
{ASSIGNOP} { createNodeT(yylval.node, codeLine, "ASSIGNOP", TreeNodeType::other); return ASSIGNOP; }
{RELOP} { createNodeT(yylval.node, codeLine, "RELOP", TreeNodeType::other); return RELOP; }
{PLUS} { createNodeT(yylval.node, codeLine, "PLUS", TreeNodeType::other); return PLUS; }
{MINUS} { createNodeT(yylval.node, codeLine, "MINUS", TreeNodeType::other); return MINUS; }
{STAR} { createNodeT(yylval.node, codeLine, "STAR", TreeNodeType::other); return STAR; }
{DIV} { createNodeT(yylval.node, codeLine, "DIV", TreeNodeType::other); return DIV; }
{AND} { createNodeT(yylval.node, codeLine, "AND", TreeNodeType::other); return AND; }
{OR} { createNodeT(yylval.node, codeLine, "OR", TreeNodeType::other); return OR; }
{DOT} { createNodeT(yylval.node, codeLine, "DOT", TreeNodeType::other); return DOT; }
{NOT} { createNodeT(yylval.node, codeLine, "NOT", TreeNodeType::other); return NOT; }
{LP} { createNodeT(yylval.node, codeLine, "LP", TreeNodeType::other); return LP; }
{RP} { createNodeT(yylval.node, codeLine, "RP", TreeNodeType::other); return RP; }
{LB} { createNodeT(yylval.node, codeLine, "LB", TreeNodeType::other); return LB; }
{RB} { createNodeT(yylval.node, codeLine, "RB", TreeNodeType::other); return RB; }
{LC} { createNodeT(yylval.node, codeLine, "LC", TreeNodeType::other); return LC; }
{RC} { createNodeT(yylval.node, codeLine, "RC", TreeNodeType::other); return RC; }
{STRUCT} { createNodeT(yylval.node, codeLine, "STRUCT", TreeNodeType::other); return STRUCT; }
{RETURN} { createNodeT(yylval.node, codeLine, "RETURN", TreeNodeType::other); return RETURN; }
{IF} { createNodeT(yylval.node, codeLine, "IF", TreeNodeType::other); return IF; }
{ELSE} { createNodeT(yylval.node, codeLine, "ELSE", TreeNodeType::other); return ELSE; }
{WHILE} { createNodeT(yylval.node, codeLine, "WHILE", TreeNodeType::other); return WHILE; }
{ID} { string* idName = new string(yytext); createNodeT(yylval.node, codeLine, "ID", idName, TreeNodeType::id); return ID; }

[ \f\v\s\t\r] { }            /*空白字符和换行处理*/
[\n] { codeLine++; }
. { isSuccess = false;
    printf("Error type A at Line %d: Mysterious character \"%s\"\n", codeLine, yytext);}     /*词法错误处理*/

%%

/*将str转成整数*/
int stoiChange(const char* str, int base) {    /*base表示数值的基数*/
    bool localSuccess = true;
    size_t slen = 0;
    int res = 0;
    try {
        res = stoi(str, &slen, base);
        if(slen != strlen(str)) {
            localSuccess = false;
        }
    } catch (...) {
        localSuccess = false;
    }
    if(!localSuccess) {
        isSuccess = false;
        printf("Error type A at Line %d: \"%s\" is not a valid %s int integer\n", codeLine, str, base == 10 ? "decimal" : base == 8 ? "octal" : "hexadecimal");
    }
    return res;
}

/*将str转成浮点数*/
float stofChange(const char* str) {
    bool localSuccess = true;
    size_t slen = 0;
    float res = 0;
    try {
        res = stof(str, &slen);
        if(slen != strlen(str)) {
            localSuccess = false;
        }
    } catch (...) {
        localSuccess = false;
    }
    if(!localSuccess) {
        isSuccess = false;
        printf("Error type A at Line %d: \"%s\" is not a valid float\n", codeLine, str);
    }
    return res;
}
