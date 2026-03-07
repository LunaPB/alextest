%{
#include "c:\tc\bin\bison\cadena.h"
%}
identificador [a-zA-Z]
constante [0-9]
opsuma [+]
opresta [-]
separador [;]
cadena {identificador}+
numero ({opresta}{constante}+)|({opsuma}{constante}+)|{constante}+
%%
{cadena} {return VAR;}
{numero} {yylval.constante=atoi(yytext); return NUM;}
{opsuma} {return ADD;}
{opresta} {return SUB;}
{separador} {return PCO;}
[ \t\n] ;
%%
