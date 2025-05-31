#include "ASTCommon.hpp"
#include "cminus.tab.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

TreeNode *root=nullptr;
extern FILE *yyin;   //只想读入的文件
bool isSuccess;
//打印结点
void printNode(TreeNode *node,int level=0){
    if(node ==nullptr) return ;
    for(int i=0;i<level;i++)
        printf("  ");
    printf("%s",node->label);

    switch(node->type){
        case TreeNodeType::semantic:
            printf(" (%d)\n", node->line);
            break;
        case TreeNodeType::id:
            printf(": %s\n", node->val.id->c_str());
            break;
        case TreeNodeType::intType:
            printf(": int\n");
            break;
        case TreeNodeType::floatType:
            printf(": float\n");
            break;
        case TreeNodeType::intVal:
            printf(": %d\n",node->val.intVal);
            break;
        case TreeNodeType::floatVal:
            printf(": %g\n",node->val.floatVal);
            break;
        case TreeNodeType::other:
            puts("");     //打印一个空行
            break;
        default:
            break;
    }
    for(auto i:node->children){
        printNode(i,level+1);     //打印子节点
    }
}

int main(int argc, char **argv)
{
    const char *fileName;
    isSuccess = true;
// #ifdef C_MINUS_FILE_IO
//     freopen("text1.out", "w", stdout);
// #endif // C_MINUS_FILE_IO

    if (argc < 2)
    {
#ifdef C_MINUS_FILE_IO
        fileName = "text1.in";
#else
        cout<<"Usage: ./cminus <filename>";
        return 0;
#endif // C_MINUS_FILE_IO
    }
    else
        fileName = argv[1];
    yyin = fopen(fileName, "r");
    if (!yyin) {
        cerr << "Error: Cannot open file " << fileName << std::endl;
        return EXIT_FAILURE;
    }
    yyparse();     //调用bison生成的语法解析器函数--从yylex函数中获取词法单元
    fclose(yyin);

    if (isSuccess)
        printNode(root);

    return 0;
}