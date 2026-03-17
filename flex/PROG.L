%{
#include <stdio.h>
#include <conio.h>
#include "c:\turboc3\bin\bison\prog.h"
%}
identificador [a-z]
constante [0-9]
opsuma [+]
opresta [-]
opdiv [/]
opmul [*]
opmod [%]
asignacion [=]
pari [(]
pard [)]
separador [;]
llai [{]
llad [}]
palm [M]
palr [R]
palw [W]

%%
{identificador}       {yylval.identificador=yytext[0];
			return VAR;}

{constante}+"."{constante}+ {strcpy(yylval.constante, yytext);
            return NUM;}

{constante}+           {strcpy(yylval.constante,yytext);
			return NUM;}

{opsuma} {return ADD;}
{opresta} {return SUB;}
{opdiv} {return DIV;}
{opmul} {return MUL;}
{opmod} {return MOD;}
{asignacion} {return ASIG;}
{pari} {return PARI;}
{pard} {return PARD;}
{separador} {return PCO;}
{palm} {return PALM;}
{palr} {return PALR;}
{palw} {return PALW;}
{llai} {return LLAI;}
{llad} {return LLAD;}

[ \t\n] ;
%%

