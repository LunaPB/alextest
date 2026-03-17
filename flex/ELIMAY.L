%{
#include <conio.h>
#include <stdio.h>
%}
%%
[A-Z]+ ;
%%
void main(void)
{
clrscr();
yyin=fopen("c:\\tc\\bin\\flex\\laura.txt","r");
yylex();
}