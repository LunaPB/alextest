%{
/* Hola mundo */
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
{identificador} {printf("Token ID %s\n",yytext);}
{constante} {printf("Token NUM %s",yytext);}
{opsuma} {printf("Token SUM %s",yytext);}
{opresta} {printf("Token SUB %s",yytext);}
{opdiv} {printf("Token DIV %s",yytext);}
{opmul} {printf("Token MUL %s",yytext);}
{opmod} {printf("Token MOD %s",yytext);}
{asignacion} {printf("Token MOV %s",yytext);}
{pari} {printf("Token PARI %s",yytext);}
{pard} {printf("Token PARD %s",yytext);}
{separador} {printf("Token PCO %s",yytext);}
{llai} {printf("Token LLAI %s\n",yytext);}
{llad} {printf("Token LLAD %s\n",yytext);}
{palm} {printf("Token PALM %s",yytext);}
{palw} {printf("Token PALW %s\n",yytext);}
{palr} {printf("Token PALR %s",yytext);}
[ \t\n] ;
%%
void main(void)
{
yylex();
}