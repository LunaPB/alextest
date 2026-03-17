%{
   #include "c:\tc\bin\bison\arbol.h"
%}
down    [A]
up      [U]
left    [<]
right   [>]
gpos    [G]
lpos    [L]
constante [0-9]*
asig  [=]
angulo({constante*})
%%
{up}	{return ARRIBA;}
{down}	{return ABAJO;}
{left}	{return GIZQ;}
{right}	{return GDER;}
{gpos}	{return GUARDAPOS;}
{lpos} {return LEEPOS;}
[0-9]* {yylval.numero=atoi(yytext);return NUM;}
%%