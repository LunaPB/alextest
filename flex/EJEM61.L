%{ /*Programa numero 2*/
   int linea_actual=1;
   #include <conio.h>
   #include <stdio.h>
   #include <string.h>
   #include "c:\tc\bin\bison\ejem6y-2.h"
%}

%%
":="	{return ASIG;}
">="	{return MAI;}
"<="	{return MEI;}
"!="	{return DIF;}
CASE	{return CASE;}
OF	{return OF;}
CASO	{return CASO;}
OTHERWISE	{return OTHERWISE;}
REPEAT	{return REPEAT;}
UNTIL	{return UNTIL;}
IF	{return IF;}
THEN	{return THEN;}
ELSE	{return ELSE;}
WHILE	{return WHILE;}
DO	{return	DO;}
AND	{return AND;}
OR	{return OR;}
NOT	{return NOT;}
FIN	{return FIN;}
[0-9]+	{
	  yylval.numero=atoi(yytext);
	  return NUMERO;
	}
[A-Za-z_][A-Za-z0-9]* {
			strcpy(yylval.variable_aux,yytext);
			return ID;
		      }
[ \t]+	{;}
\n	{linea_actual++;}
.	{return yytext[0];}
%%