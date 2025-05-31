main: lex.yy.c cminus.tab.c main.cpp
	g++ lex.yy.c cminus.tab.c main.cpp -I. -g -o cminus --std=c++11

lex.yy.c: cminus.l cminus.tab.c
	flex cminus.l

cminus.tab.c: cminus.y
	bison -d cminus.y

clean:
	rm lex.yy.c cminus.tab.c cminus.tab.h cminus
