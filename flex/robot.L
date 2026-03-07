%{
#include<stdio.h>
#include<string.h>
int lineas = 1;
int i;
int numero;

struct reservadas {
	char *palabra;
	int word;
} palabras[9] = {"Avanza", AVANZA, "Deja", DEJA, "Derecha", DERECHA, "Izquierda", IZQUIERDA,
		"Levanta", LEVANTA, "Mira", MIRA, "Objeto", OBJETO, "Pantalla", PANTALLA,
		"Teclado", TECLADO};
%}

id [a-zA-Z]+
constante [0-9]+
espacios [ \t]
linea [\n] 

%%
{linea} {lineas++;}
{id} {  if(yyleng > 8)
	 	
	else {
		i = 0;
		while(i < 9)
		{
			if(strcmp(yytext, palabras[i].palabra) == 0)
			{
				return palabras[i].word;
				break;
			}
			i++;
		}
		return ID;
	} }
{constante} {   return CONSTANTE;}
"+" { return MAS;}
"-" { return MENOS;}
"*" { return PRODUCTO;}
"/" { return DIVISION;}
{espacios} ;
"->" { return ASIGNACION;}
"(" { return PARABRE;}
")" { return PARCIERRA;}
"¨" { return INISENT;}
"?" { return FINSENT;}
"=>" { return THEN;}
"/=>" { return ELSE;}
";" { return PTOCOM;}
%%
