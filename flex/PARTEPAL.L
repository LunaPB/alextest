%{
/* Ejemplo 2
*/
#include <stdio.h>
#include <conio.h>
%}

palabra [^ \t\n]+
esp [ ]
tab [\t]
ent [\n]
%%
{palabra} {printf("%s\n",yytext);}
{esp}	{;}
{tab}   {;}
{ent}   {;}
%%
main ()
{
yyin=fopen("c:\\tc\\bin\\flex\\laura.txt","rt");
clrscr();
yylex();
}
