%{
#include <math.h>
int n;
int convert(char *res, int base);

%}


bin[01]+[bB]
oct[0-7]+[Oo]
hex[0-9a-fA-F]+[Hh]
vacio[ \t]
%%

{oct}	    {n=convert(yytext,8);  printf("decimal: %d\n",n);}
{bin}       {n=convert(yytext,2);  printf("decimal: %d\n",n);}
{hex}       {n=convert(yytext,16); printf("decimal: %d\n",n);}
{vacio}		{;}


%% ////*codigo usuario*////

void main (void)
{

  while (yylex());
}

int convert(char *res, int base)
  {
	int cadena= strlen(res)-1, i;
	int suma=0;
	int digito=0;


	for (i=0; i<cadena; i++)
	{
		if(res[cadena-i-1]>96 && res[cadena-i-1] < 103) digito=res[cadena-i-1]-96+9;

		  else
		       if (res[cadena-i-1]>64 && res[cadena-i-1] < 71) digito=res[cadena-i-1]-64+9;

			 else digito=res[cadena-i-1]-48;

		  suma=suma+(digito*(pow(base,i)));
	}

	return suma;
  }


