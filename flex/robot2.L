%{

#include<stdio.h>
#include<string.h>

int lineas = 1;
int i;
int numero;
%}

linea [\n] 
espacio [ \t]
id [a-zA-Z]+
constante [0-9]+
%%
{linea} {lineas++;}
{id} {  if(strcmp(yytext,"Avanza") == 0) return AVANZA;
	else if(strcmp(yytext,"Deja")==0) return DEJA;
	else if(strcmp(yytext,"Derecha")==0) return DERECHA;
	else if(strcmp(yytext,"Izquierda")==0) return IZQUIERDA;
	else if(strcmp(yytext,"Levanta")==0) return LEVANTA;	
	else if(strcmp(yytext,"Mira")==0) return MIRA;
	else if(strcmp(yytext,"Objeto")==0) return OBJETO;
	else if((strcmp(yytext,"Pantalla")==0) return PANTALLA;
	else if(strcmp(yytext,"Teclado")==0) return TECLADO;
	else 
	{
		if(yyleng<= 8) 
		{			
			return ID;
		}
		//Longitud no valida
	}
}
{constante} {   
		numero = atoi(yytext);
		return CONSTANTE; }
"+" { return MAS;}
"-" { return MENOS;}
"*" { return PRODUCTO;}
"/" { return DIVISION;}
{espacio} ;
"->" { return ASIGNACION;}
"(" { return PARABRE;}
")" { return PARCIERRA;}
"¿" { return INISENT;}
"?" { return FINSENT;}
"=>" { return THEN;}
"/=>" { return ELSE;}
";" { return PTOCOM;}
%%
