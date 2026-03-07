%{
#include <stdio.h>
#include <conio.h>
%}
identificador [a-z]
constante [0-9]
opsuma [+]
opresta [-]
opmul [*]
opdiv [/]
opmod [%]
asignacion [=]
pari [(]
pard [)]
separador [;]
llai [{]
llad [}]
palm [M]
palw [W]
palr [R]
%%
{identificador} {printf("Token: Identificador %s\n",yytext);}
{constante} {printf("Token: Constante %s\n",yytext);}
{opsuma} {printf("Token: Op Suma %s\n",yytext);}
{opresta} {printf("Token: Op Resta %s\n",yytext);}
{opmul} {printf("Token: Op Multiplicacion %s\n",yytext);}
{opmod} {printf("Token: Op Modulo %s\n",yytext);}
{asignacion} {printf("Token: Asignacion %s\n",yytext);}
{pari} {printf("Token: Parentesis Izquierdo %s\n",yytext);}
{pard} {printf("Token: Parentesis Derecho %s\n",yytext);}
{separador} {printf("Token: Punto y coma %s\n",yytext);}
{llai} {printf("Token: Llave Izquierda %s\n",yytext);}
{llad} {printf("Token: Llave Derecha %s\n",yytext);}
{palm} {printf("Token: Palabra reservada Main %s\n",yytext);}
{palw} {printf("Token: Palabra reservada Write %s\n",yytext);}
{palr} {printf("Token: Palabra reservada Read %s\n",yytext);}
[ \t\n] ;
%%
main()
{
yyin=fopen("c:\\tc\\bin\\flex\\laura.txt","rt");
clrscr();
yylex();

}
