%{
/* Reconocedor lexico de un Robot */
#include "c:\tc\bin\bison\dos.h"
int nlinea=1;
int valor = 0;
%}
identificador[a-zA-Z]+
constante [0-9]+
%%
[\n] {nlinea++;}
[;] {return SEP;}
[+] {return SUM;}
[-] 		{return RES;}
[/] 		{return DIV;}
[*] 		{return MUL;}
[->]+ 		{return ASIG;}
[(] 		{return PAI;}
[)] 		{return PAD;}
[Avanza]+ 	{return AVA;}
[Coge]+ 	{return COG;}
[Deja]+ 	{return DEJ;}
[Derecha]+ 	{return DER;}
[Izquierda]+ 	{return IZQ;}
[Mira]+ 	{return MIR;}
[Objeto]+ 	{return OBJ;}
[Pantalla]+ 	{return PAN;}
[Teclado]+ 	{return TEC;}
[End]+ 		{return END;}
{identificador} {if(strlen(yytext) <= 8){yylval.identificador=yytext;return ID;}}
{constante} 	{yylval.constante=yytext;valor = atoi(yytext);return NUM;}
%%
