%{
/*Diseño de un compilador para el lenguaje Robot*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <dos.h>
#include "c:\tc\bin\flex\lexyy.c"
void genera(char*);
void genera2(char*,char*);
void yyerror(char*);
int x,y,z;
%}
%union
{
char *identificador;
char *constante;
}
%token <constante> NUM
%token <identificador> ID
%token AVA
%token COG
%token DEJ
%token ASIG
%token DER
%token IZQ
%token MIR
%token OBJ
%token PAN
%token TEC
%token SUM
%token RES
%token MUL
%token DIV
%token MOD
%token IGU
%token PAI
%token PAD
%token SEP
%token END
%start programa
%%

programa	: programa exp fin
		| programa error
		|
;
fin		: END 
		{
			genera("END");
		}
;

exp		: AVA PAI NUM PAD 
		{
			for(x=0;x< valor;x++)
			{
				genera("GO");	
			}
		}
		| PAN PAI PAD  
		{
			genera("PRINT");

		}
		| DER PAI NUM PAD 
		{
			for(y=0;y< valor;y++)
			{
				genera("RIGHT");
			}
		}
		| IZQ PAI NUM PAD 
		{
			for(z=0;z< valor;z++)
			{
				genera("LEFT");
			}
		}
		| MIR PAI PAD
		{	
			genera("READ"); 
			genera("POKE");
		} 
		| DEJ PAI PAD
		{
			genera("PUT");
			genera("COUNT");
			genera("DEC"); 
			genera("POKE");
		} 
		| COG PAI PAD
		{
			genera("GET"); 
			genera("COUNT"); 
			genera("INC"); 
			genera("POKE");
		} 
		| exp2 ASIG exp2
		| exp2 exp2
;
exp2            : exp2 SUM exp2 
		{
			genera("ADD");
		}
		| exp2 RES exp2
		{	
			genera("NEG");
		}
		| exp2 MUL exp2 
		{	
			genera("MUL");
		}
		| exp2 DIV exp2 
		{
			genera("DIV");
		}
		| NUM
		| ID
;
%%
void main()
{
	yyin=fopen("c:\\tc\\bin\\fue.txt","rt");
	yyout=fopen("c:\\tc\\bin\\sal.txt","wt");
	
	clrscr();
	printf("\t\t\tCompilador Lenjuaje Robot V.1.0\n");
	printf("\t\tCompilando...\n");
	getch();
	clrscr();
	printf("Proceso Terminado\n");
	getch();
	clrscr();
	yyparse();
}

void genera(char *s)
{
	fprintf(yyout,"\t %s\n",s);
}

void genera2(char *s,char *x)
{
	fprintf(yyout,"\t %s %s\n",s,x);
}
void yyerror(char *s)
{
	printf("\t Error en linea %d : %s\n",nlinea,s);
}