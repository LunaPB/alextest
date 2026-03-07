%{
/*Ejemplo de programa en flex*/
#include<stdio.h>
#include<conio.h>
int contador=0,contador2=0;
%}
letra [a-zA-Z]
digito [0-9]
constante {digito}+
identificador {letra}({letra}|{digito})*
%%
{identificador} {contador++;printf("Ok Identificador No: %d \n",contador);}
{constante} {contador2++;printf("Ok Constante No: %d \n",contador2);}
%%
void main(void)
{
clrscr();
yylex();
}
