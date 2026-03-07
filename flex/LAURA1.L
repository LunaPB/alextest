%{
#include <math.h>
int algo;
int conv(char *res, int base);
%}
binario		[01]+[bB]
octal		[0-7]+[Oo]
hexade		[0-9a-fA-F]+[Hh]
vacio		[ \t]
%%
{octal}	        {algo=conv(yytext,8); printf("Valor de yytext: %s   Valor decimal: %d\n",yytext,algo);}
{binario}       {algo=conv(yytext,2); printf("Valor de yytext: %s   Valor decimal: %d\n",yytext,algo);}
{hexade}        {algo=conv(yytext,16); printf("Valor de yytext: %s   Valor decimal: %d\n",yytext,algo);}
{vacio}		{;}
%%
void main (void)
{
yyin=fopen("c:\\tc\\bin\\flex\\laura.txt","r");
clrscr();
yylex();
}
int conv(char *res, int base)
{
	int l= strlen(res)-1, i;
	int suma=0;
	int digito=0;
	for (i=0;i<l;i++)
	{
		if(res[l-i-1]>96 && res[l-i-1] < 103) digito=res[l-i-1]-96+9;
		else if (res[l-i-1]>64 && res[l-i-1] < 71) digito=res[l-i-1]-64+9;
		else digito=res[l-i-1]-48;
		suma=suma+(digito*(pow(base,i)));
	}
	return suma;
}


