%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>
#include <conio.h>
#include<string.h>
#include <process.h>
#include <math.h>
int linea=1; //n lineas
int b=0,a=0,x,i,y;
int cuentae=0;
int esta=0;
char arch[30];
int pard,pari;
FILE *yyin, *yyout;
char let,c;
int num;
char tipo[10];
void yyerror(char*);
int yyparse(void);
void genera1(char*);
void genera4(char*);
void genera2(char*, int);
void genera3(char*, int);
struct nodo{
      char id;
      char tipo[10];
      int valor;
      struct nodo *sigte;
      } ;
typedef struct nodo *nodoptr;
void inserta(nodoptr raiz,char id,char tipo[10],int valor);
void verlista(nodoptr);
nodoptr buscanodo(nodoptr,char);
int buscatipo(nodoptr,char,char tipo[10]);
nodoptr raiz;
nodoptr aux,nnodo;
%}

%union {char identificador;
	int constante;
	}
%token <constante> NUM
%token <identificador> VAR
%type <constante> bloque sentencia lectura escritura asignacion
%right '='
%left '-' '+'
%left '*' '/' '%'
%left NEG
%start programa

%%

programa:| 'M' '{'masvariables bloque finbloque
	| 'M' '{'comentario masvariables comentario bloque comentario finbloque comentario
	|  '{'  masvariables bloque finbloque {cuentae++;printf("FALTA M\n");}
	|  masvariables bloque finbloque {cuentae++;printf("FALTA M {\n");}
	| 'M' masvariables bloque finbloque  {cuentae++;printf("FALTA '{'\n");}
	| error
;

masvariables: /*vacio*/
	| variable comentario masvariables
	| variable
	| variable
	| comentario


;
variable: tipo VAR ';'  {let=$2;inserta(raiz,let,tipo,0);genera2("",let);}
	| tipo VAR {let=$2;printf("LINEA %d: FALTA ';' EN DECLARACION DE '%c'\n",linea-1,let);}
	| tipo {printf("LINEA %d:  DECLARACION INCORRECTA\n",linea-1);}
	| tipo ';'{cuentae++;printf("LINEA %d: DECLARACION INCORRECTA\n",linea);}
	| VAR ';' {let=$1;cuentae++;printf("LINEA %d: A %c LE FALTO EL TIPO DE DATO\n",linea,let);}
	| VAR {let=$1;cuentae++;printf("LINEA %d: DECLARACION INCORRECTA FALTA EL TIPO DE DATO Y ';'\n",linea-1);}
	| NUM {cuentae++;printf("LINEA %d: ERROR DE LA CONSTANTE \n ",linea);}
	| NUM ';' {cuentae++;printf("LINEA %d: ERROR DE LA CONSTANTE \n",linea);}
;

tipo: 'I' {if(a==0){strcpy(tipo,"int");if(cuentae==0)  genera4(" DB ");}}
     |'C' {if(a==0){strcpy(tipo,"char");if(cuentae==0)  genera4(" DB ");}}
;

bloque:
	|
	{  	if(cuentae==0)
		{
		genera1("MYDATA ENDS");
		genera1("MYCODE SEGMENT PARA 'CODE'");
		genera1("MYPROC PROC FAR");
		genera1("ASSUME CS:MYCODE, DS:MYDATA, SS: STACK");
		genera1("PUSH DS");
		genera1("SUB AX,AX");
		genera1("PUSH AX");
		genera1("MOV AX,MYDATA");
		genera1("MOV DS,AX");
		}
	}
	instrucciones
	| NUM {printf("LINEA %d: ERROR DE LA CONSTANTE ",linea);}
	| NUM ';' {printf("LINEA %d: ERROR DE LA CONSTANTE \n",linea);}
;

finbloque :  {printf("FALTA '}'\n");}
	|'}'{   if(cuentae==0)
		{
			genera1("RET");
			genera1("MYPROC ENDP");
			genera1("MYCODE ENDS");
			genera1("END");
		}
	}
;



instrucciones: /*cadena vacia*/
	|instrucciones sentencia ';';
	|instrucciones sentencia ';' comentario
	|instrucciones comentario sentencia ';'
	|instrucciones comentario sentencia ';' comentario
	|instrucciones sentencia {cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);}/*erika*/
	|instrucciones sentencia  comentario {cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);}
	|instrucciones comentario sentencia {cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);}
	|instrucciones comentario sentencia comentario {cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);}
;
sentencia: lectura
	| escritura
	| asignacion
	| NUM {cuentae++;printf("LINEA %d: ERROR DE LA CONSTANTE \n",linea);}
;


lectura: 'R' VAR {let=$2;
			if(!buscanodo(raiz,$2))
			 {
				cuentae++;
				printf("LINEA %d: VARIABLE '%c' NO DECLARADA EN READ \n",linea,let);
			 }
			 if(cuentae==0)
			 {
				 genera1("MOV AH,01H\nINT 21H");
				 genera3("MOV",$2);
				 genera1(",AL");
			 }
		}
;

escritura: 'W' VAR {let=$2;
		 if(!buscanodo(raiz,$2))
		 {
			cuentae++;
			printf("LINEA %d: VARIABLE '%c' NO DECLARADA EN WRITE \n",linea,let);
		 }
		 if(cuentae==0)
		 {
			 genera1("MOV AH,09H\n 21H");
			 genera4("MOV AL");
			 genera2(",",$2);
		 }
	  }
;

asignacion: var '=' exp {
		if(!buscanodo(raiz,let)&&y==0)
		{
			cuentae++;
			printf("LINEA %d: ASIGNACION NO VALIDA VARIABLE '%c' NO DECLARADA \n",linea,let);
		}
		if(cuentae==0)
		{
			genera3("MOV",let); genera1(",AX");
			genera4("MOV AX,");
		}
		x=pari-pard;
		if(x>0)
		{       cuentae++;
			for(i=0;i<abs(x);i++)
			printf("LINEA %d: PARENTESIS NO BALANCEADOS EN LA EXPRESION FALTA ')'\n",linea);}
		else
		if(x<0)
		{       cuentae++;
			for(i=0;i<abs(x);i++)
			printf("LINEA %d: PARENTESIS NO BALANCEADOS EN LA EXPRESION FALTA '('\n",linea);}
		}

;
var:     {cuentae++; printf("LINEA %d: ASIGNACION NO VALIDA \n",linea);}
	| VAR {cuentae=0;let=$1;
		if(buscatipo(raiz,$1,"int")==0)
		{
			cuentae++;
			printf("LINEA %d: ASIGNACION NO VALIDA EN TIPO DE DATO DE VARIABLE '%c' \n",linea,let);
		}
	}
;
exp:NUM {if(cuentae==0)genera2("",$1);}
    |VAR {let=$1;
		if(!buscanodo(raiz,$1))
		{       cuentae++;
			printf("LINEA %d: EXPRESION NO VALIDA VARIABLE '%c' NO DECLARADA \n",linea,let);
		}
		else
		if(buscatipo(raiz,$1,"int")==0)
		{
			cuentae++;
			printf("LINEA %d: EXPRESION NO VALIDA EN TIPO DE DATO DE VARIABLE '%c' \n",linea,let);
		}
		else
			genera2("",$1);
    }
    |exp {if(cuentae==0)genera4("ADD AX,");} '+' exp
    |exp {if(cuentae==0)genera4("SUB AX,");} '-' exp
    |exp {if(cuentae==0)genera4("MUL AX,");} '*' exp
    |exp {if(cuentae==0)genera4("DIV AX,");} '/' exp
    |exp {if(cuentae==0)genera4("MOD AX,");} '%' exp
    |'-'  {if(cuentae==0)genera4("NEG");} exp %prec NEG
    |'(' exp ')'
    |'(' exp {pari++;}
    | exp ')'{pard++;}
;

comentario:
	   | '/' '/' frase
	   | '/' frase {cuentae++;printf("LINEA %d: ERROR EN COMENTARIO",linea);}
	   | '/' '*' frase  '*' '/'
	   | '/' '*' frase {cuentae++;printf("LINEA %d: FALTA CERRAR COMENTARIO \n",linea);}
	   | '/'  frase '*''/'{cuentae++;printf("LINEA %d: FALTA INICIO COMENTARIO \n",linea);}
;
frase:
	| frase VAR
	| frase NUM
;
%%

//aqui empieza analizador l‚xico

int yylex(void)
{
  int c;
  while((c=getc(yyin))!=EOF)
  {
   if((c==' ') || (c=='\t')) continue;
     if(c=='\n')
      { linea++;
       continue; }
     if(isdigit(c))
     {
       yylval.constante=c;
       return NUM;
     }
     if(islower(c))
     {
       yylval.identificador=c;
       return VAR;
     }
     return c;
  }
  return 0;
}

//principal

void main()
{
   clrscr();
  if((yyin=fopen("c:\\fuente.txt","r"))==NULL)
  {
   printf("No se puede abrir el fichero fuente -> %s \n");
   exit(-2);
  }
  if((yyout=fopen("c:\\salida.txt","w"))==NULL)
  {
   printf("No se puede abrir el fichero destino -> %s \n");
   exit(-3);
  }
  printf("\nSe esta COMPILANDO...... \n");
  fprintf(yyout,"STACK SEGMENT PARA STACK\n  DB 64 DUP('MYSTACK')\n STACK ENDS\n");
  fprintf(yyout,"MYDATA SEGMENT PARA 'DATA'\n");
  raiz=(nodoptr)malloc(sizeof(struct nodo));
  raiz->sigte=NULL;
  yyparse();
  printf("\n.................SE ACABO\n");
  printf("\nREVISE EL ARCHIVO (A:SALIDA.TXT)\n");
  fcloseall();
  if(cuentae>0)
  {
	if((yyout=fopen("c:\\salida.txt","w"))==NULL)
	{
		printf("No se puede abrir el fichero destino -> %s \n");
		exit(-3);
	}
  }
  fcloseall();
printf("presione una tecla para continuar");
getch();
  verlista(raiz);
  fclose(yyin);
}

void yyerror(char *s)
{
}

void genera1 (char *s)
{
  fprintf(yyout,"%s \n",s);
}
void genera2(char *s, int x)
{
  fprintf(yyout,"%s %c \n",s,x);
}
void genera3(char *s, int x)
{
  fprintf(yyout,"%s %c",s,x);
}
void genera4(char *s)
{
  fprintf(yyout,"%s",s);
}

void inserta(nodoptr raiz,char id,char tipo[10],int valor)
{
	aux=raiz;
	if (aux->sigte==NULL)
	{
		nnodo=(nodoptr)malloc(sizeof(struct nodo));
		nnodo->id=id;
		strcpy(nnodo->tipo,tipo);
		nnodo->valor=valor;
		nnodo->sigte=NULL;
		raiz->sigte=nnodo;
	}
	else
	{
		while((aux!=NULL)&&esta!=1)
		{
			if(aux->id==id)
				esta=1;
			aux=aux->sigte;
		}
		if(esta==1)
		{
			aux = raiz;
			cuentae++;
			printf("LINEA %d: DECLARACION DOBLE DE '%c' \n",linea,let);
		}
		else
		{
			nnodo=(nodoptr)malloc(sizeof(struct nodo));
			nnodo->id=id;
			strcpy(nnodo->tipo,tipo);
			nnodo->valor=valor;
			nnodo->sigte=raiz->sigte;
			raiz->sigte=nnodo;
		}
	}
}

void verlista(nodoptr raiz)
{
	aux=raiz->sigte;
	printf("\nTABLA DE SIMBOLOS\n");
	while(aux)
	{
		printf("%c  %s  %d",aux->id,aux->tipo,aux->valor);
		printf("\n");
		aux=aux->sigte;
	}
	getch();
}

nodoptr buscanodo(nodoptr aux, char dato)
{
	aux=aux->sigte;
	while((aux!=NULL))
	{
		if(aux->id==dato)return aux;
		aux=aux->sigte;
	}
	return NULL;
}
int buscatipo(nodoptr aux, char dato,char tipo[10])
{
	aux=aux->sigte;
	while((aux!=NULL))
	{
		if(aux->id==dato)
		{
			if((strcmp(aux->tipo,tipo))==0)
				return 1;
		}
		aux=aux->sigte;
	}
	return 0;
}