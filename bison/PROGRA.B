%{
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <mem.h>
#include "c:\tc\bin\flex\lexyy.c"
int nlinea=1;
void yyerror(char*);
void genera (char*);
void genera2(char*,int);
%}
%union
{ char identificador;
  char constante;
}
%token <constante> NUM
%token <identificador> VAR
%token PALM PALW PALR LLAI LLAD PARI PARD PCO
%type <constante> bloque sentencia lectura escritura asignacion
%right ASIG
%left SUB ADD
%left MUL DIV MOD
%start programa
%%
programa	: PALM LLAI bloque finBloque
bloque		: { genera(".CODE"); } instrucciones
		  ;
finBloque	: LLAD	{genera("END");}
		  ;
instrucciones :
		| instrucciones sentencia
		| instrucciones sentencia PCO
		;
sentencia   : lectura
	      | escritura
	      | asignacion
	      ;
lectura     : PALR VAR		{ genera2("INPUT", $2);}
	      ;
escritura   : PALW VAR		{ genera2("OUTPUT", $2);}
	      ;
asignacion  : VAR		{ genera2("PUSHA", $1);}
	      ASIG exp          { genera("STORE");}
	      ;
exp	    : NUM		   { genera2("PUSHC", $1);}
	      | VAR		   { genera2("PUSHA", $1);
				     genera("LOAD");
				   }
	      | exp ADD exp	   { genera("ADD");	}
	      | exp SUB exp	   { genera("NEG");
				     genera("ADD");
				   }
	      | exp MUL exp	   { genera("MUL");}
	      | exp DIV exp	   { genera("DIV");}
	      | exp MOD exp	   { genera("MOD");}
	      | PARI exp PARD
	      ;
%%
void main(void)
{
clrscr();
yyin=fopen("c:\\tc\\bin\\bison\\laura.txt","r");
yyout=fopen("c:\\tc\\bin\\bison\\salida.txt","w");

printf("\nCompilador MUSIM1-ENSAMPOCO1 Bison");
printf("\nTraduciendo ...\n");
yyparse();
}

/* subrutina de error */
void yyerror (char *s)
{
  printf ("Error en linea %d : %s\n", nlinea, s);
}
void genera(char *s)
{
  fprintf(yyout,"%s\n",s);
}
void genera2(char *s, int x)
{
  fprintf(yyout,"%s %c\n", s, x);
}