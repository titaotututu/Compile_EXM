# 2025编译原理大作业

# 运行环境：
- Linux：Ubuntu 22.04
- bison:3.8.2
- flex:2.6.4
- gdb:12.1
- g++:11.4.0

# 实验要求
- 你的程序要能够查出CMINUS源代码中可能包含的下述几类错误
1. 词法错误（错误类型A）：即出现CMINUS词法中未定义的字符以及任何不符合
CMINUS词法单元定义的字符
2. 语法错误（错误类型B）:除此之外，你的程序可以选择完成以下部分或全部的要求
    - 识别八进制数（0123）和十六进制数（0x3F）
    - 识别指数形式的浮点数（1.5e-4）
    - 识别 //和/*...*/形式的注释
    在输出错误信息时，需要输出具体的错误类型、出错的位置以及相关的说明文字

## 输入格式
- 一个包含CMINUS源代码的文本文件，程序需要能够接收一个输入文件
名作为参数。例如，假设你的程序名为cc、输入文件名为test1、程序和输入文件都位于当前目录下，那么在Linux命令行下运行./cc test1即可获得以test1作为输入文件的输出结果。

## 输出格式
- Error type [错误类型] at Line [行号]: [说明文字]
    - 词法错误为错误类型A，语法错误为错误类型B


cminus.l :Flex词法分析器：用于定义关键词、标识符、数字等词法规则
cminus.y:语法分析器生成器，用于定义语法规则，将FLEX生成的此法单元token组织成语法树

 bison -d cminus.y  //生成解析器代码
    - 生成cminus.y cminus.tab.c cminus.tab.h 三个文件

- yytext:是一个全局变量，由 Lex 自动生成，表示当前匹配的词法单元（token）的文本内容  char*
- yylval:是一个全局变量，用于在词法分析器（Lex）和语法分析器（Yacc/Bison）之间传递附加信息。yylval 的类型由 Yacc/Bison 中的 %union 定义，通常是一个联合体（union），可以存储多种类型的数据
    当词法分析器识别到一个词法单元时，可以通过 yylval 将附加信息（如数值、标识符名称等）传递给语法分析器。
    例如，当匹配到一个整数时，可以将其数值存储到 yylval 中

## 说明
1. 浮点数的处理：



compile_exm/
├── main.cpp
├── ASTCommon.hpp
├── test.cminus
├── cminus.l
├── cminus.y
├── Makefile（或手动生成 lex.yy.c 和 cminus.tab.c）
├── lex.yy.c
├── cminus.tab.c
├── cminus.tab.h
├── .vscode/
    ├── tasks.json
    └── launch.json
    └── c_cpp_properties.json
    └── settings.json

# 执行流程：
1. 词法分析 flex ->非法字符，未闭合注释
2. 语法分析 bison ->缺少分号，括号匹配不一致
3. 输出 ：有错误时输出错误，没错误时输出行号
