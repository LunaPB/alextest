%{
#include "c:\tc\bin\bison\progra.h"
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
{identificador} {yylval.identificador=yytext[0]; return VAR;}
{constante} {yylval.constante=yytext[0]; return NUM;}
{opsuma} {return ADD;}
{opresta} {return SUB;}
{opdiv} {return DIV;}
{opmul} {return MUL;}
{opmod} {return MOD;}
{asignacion} {return ASIG;}
{pari} {return PARI;}
{pard} {return PARD;}
{separador} {return PCO;}
{llai} {return LLAI;}
{llad} {return LLAD;}
{palm} {return PALM;}
{palw} {return PALW;}
{palr} {return PALR;}
[ \t\n] ;
%%
