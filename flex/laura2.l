
%{
   int funcion=0;
%}
cadena 	[a-zA-Z0-9!#$%&/<>=+-.,;:]*
finlinea \n
%%
{cadena}        { printf ("cadena: %s \n",yytext);
		  printf("funcion: %d \n", funcion);
		}
{finlinea}      funcion++;
%%
void main(void)
{

  while(yylex());

}