%{
#include "c:\tc\bin\flex\lexyy.c"
#include <string.h>
typedef struct _double_cond
	{ char etq_verdad[21];
	 char etq_falso[21];
	}doble_cond;
typedef struct _datos_case
	{ char etq_final[21];
	  char variable_expr[21];
	}datos_case;
%}
%union{
	int numero;
	char variable_aux[21];
	char etiqueta_aux[21];
	char etiqueta_siguiente[21];
	doble_cond bloque_cond;
	datos_case bloque_case;
}
%token <numero> NUMERO
%token <variable_aux> ID
%token <etiqueta_aux> IF WHILE REPEAT
%token <etiqueta_siguiente> CASO
%token ASIG THEN ELSE FIN DO UNTIL CASE OF OTHERWISE
%token MAI MEI DIF

%type <variable_aux> expr
%type <bloque_cond> cond
%type <bloque_case> inicio_case

%left OR
%left AND
%left NOT
%left '+''-'
%left '*''/'
%left MENOS_USUARIO

%%
prog :	prog sent';'
	| prog error ';' {yyerrok}
	|
	;
sent :	ID ASIG expr {
		printf("\t%s=%s\n",$1,$3);
		}
	| IF cond
		{ printf("label %s\n",$2.etq_verdad);
		}
	  THEN sent ';'
		{ nueva_etq($1);
		  printf("\tgoto %s\n",$1);
		  printf("label %s\n",$2.etq_falso);
		}
	  opcional
	  FIN IF
		{ printf("label %s\n",$1);
		}
	| '{'lista_sent'}'  {;}
	| WHILE
		{ nueva_etq($1);
		  printf("label %s\n",$1);
		}
	  cond
		{ printf("label %s\n",$3.etq_verdad);
		}
	  DO sent ';'
		{ printf("\tgoto %s\n",$1);
		}
	  FIN WHILE
		{ printf("label %s\n",$3.etq_falso);
		}
	| REPEAT
		{ nueva_etq($1);
		  printf("label %s\n",$1);
		}
	  sent ';'
	  UNTIL cond
		{ printf("label %s\n",$6.etq_falso);
		  printf("\tgoto %s\n",$1);
		  printf("label %s\n",$6.etq_verdad);
		}
	| sent_case
	;
opcional : ELSE sent';'
	 |
	 ;
lista_sent : /*Epsilon*/
	   | lista_sent sent';'
	   | lista_sent error';' {yyerrok;}
	   ;
sent_case : inicio_case
	    OTHERWISE sent';'
	    FIN CASE
		{ printf("label %s\n",$1.etq_final);
		}
	  | inicio_case
	    FIN CASE
		{ printf("label%s\n",$1.etq_final);
		}
	  ;
inicio_case :	CASE expr OF
			{ strcpy($$.variable_expr,$2);
			  nueva_etq($$.etq_final);
			}
	    | inicio_case
	      CASO expr':'
		{ nueva_etq($2);
		  printf("\tif %s !=%s goto %s\n",$1.variable_expr,$3,$2);
		}
	      sent';'
		{ printf("\tgoto %s\n",$1.etq_final);
		  printf("label %s\n",$2);
		  strcpy($$.variable_expr,$1.variable_expr);
		  strcpy($$.etq_final,$1.etq_final);
		}
	    ;
expr :	NUMERO
		{ nueva_var($$);
		  printf("\t%s=%d;\n",$$,$1);
		}
     |	ID
	{ strcpy($$,$1);
	}
     |	expr'+'expr
		{ nueva_var($$);
		  printf("\t%s=%s+%s;\n",$$,$1,$3);
		}
     |	expr'-'expr
		{ nueva_var($$);
		  printf("\t%s=%s-%s;\n",$$,$1,$3);
		}
     |  expr'*'expr
		{ nueva_var($$);
		  printf("\t%s=%s*%s;\n",$$,$1,$3);
		}
     |	expr'/'expr
		{ nueva_var($$);
		  printf("\t%s=%s/%s;\n",$$,$1,$3);
		}
     |	'-'expr %prec MENOS_USUARIO
				{ nueva_var($$);
				printf("\t%s=-%s\n",$$,$2);
				}
     |	'('expr')'
		{ strcpy($$,$2);
		}
     ;
cond :	expr'>'expr
	     { nueva_etq($$.etq_verdad);
	       nueva_etq($$.etq_falso);
	       printf("\tif %s > %s goto %s\n",$1,$3,$$.etq_verdad);
	       printf("\tgoto %s\n",$$.etq_falso);
	     }
     |  expr'<'expr
	     { nueva_etq($$.etq_verdad);
	       nueva_etq($$.etq_falso);
	       printf("\tif %s < %s goto %s\n",$1,$3,$$.etq_verdad);
	       printf("\tgoto %s\n",$$.etq_falso);
	     }
     |  expr MAI expr
	     { nueva_etq($$.etq_verdad);
	       nueva_etq($$.etq_falso);
	       printf("\tif %s >= %s goto %s\n",$1,$3,$$.etq_verdad);
	       printf("\tgoto %s\n",$$.etq_falso);
	     }
     |  expr MEI expr
	     { nueva_etq($$.etq_verdad);
	       nueva_etq($$.etq_falso);
	       printf("\tif %s <= %s goto %s\n",$1,$3,$$.etq_verdad);
	       printf("\tgoto %s\n",$$.etq_falso);
	     }
     |  expr'=' expr
	     { nueva_etq($$.etq_verdad);
	       nueva_etq($$.etq_falso);
	       printf("\tif %s = %s goto %s\n",$1,$3,$$.etq_verdad);
	       printf("\tgoto %s\n",$$.etq_falso);
	     }
     |  expr DIF expr
	     { nueva_etq($$.etq_verdad);
	       nueva_etq($$.etq_falso);
	       printf("\tif %s != %s goto %s\n",$1,$3,$$.etq_verdad);
	       printf("\tgoto %s\n",$$.etq_falso);
	     }
     |  NOT cond
	     { strcpy($$.etq_verdad,$2.etq_falso);
	       strcpy($$.etq_falso,$2.etq_verdad);
	     }
     |	cond AND
	     { printf("label %s\n",$1.etq_verdad);
	     }
	cond
	     { printf("label %s\n",$1.etq_falso);
	       printf("\tgoto %s\n",$4.etq_falso);
	       strcpy($$.etq_verdad,$4.etq_verdad);
	       strcpy($$.etq_falso,$4.etq_falso);
	     }
     |  cond OR
	     { printf("label %s\n",$1.etq_falso);
	     }
	cond
	     { printf("label %s\n",$1.etq_verdad);
	       printf("\tgoto %s\n",$4.etq_verdad);
	       strcpy($$.etq_verdad,$4.etq_verdad);
	       strcpy($$.etq_falso,$4.etq_falso);
	     }
     |  '('cond')'
	     { strcpy($$.etq_verdad,$2.etq_verdad);
	       strcpy($$.etq_falso,$2.etq_falso);
	     }
     ;
%%
void main()
{
yyin=fopen("c:\\tc\\bin\\bison\\fuente.txt","rt");
yyout=fopen("c:\\tc\\bin\\bison\\salida.txt","wt");
clrscr();
yyparse();
}
int yyerror(char *s)
{ printf("Error de sintaxis en la linea %d\n",linea_actual);
}
int nueva_var(char *s)
{ static actual=0;
	strcpy(s,&"tmp");
	itoa(++actual,&(s[3]),10);
}
int nueva_etq(char *s)
{ static actual=0;
	strcpy(s,&"etq");
	itoa(++actual,&(s[3]),10);
}