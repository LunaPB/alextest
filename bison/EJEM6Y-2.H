typedef struct _double_cond
	{ char etq_verdad[21];
	 char etq_falso[21];
	}doble_cond;
typedef struct _datos_case
	{ char etq_final[21];
	  char variable_expr[21];
	}datos_case;

typedef union{
	int numero;
	char variable_aux[21];
	char etiqueta_aux[21];
	char etiqueta_siguiente[21];
	doble_cond bloque_cond;
	datos_case bloque_case;
} YYSTYPE;
extern YYSTYPE yylval;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#define	YYACCEPT	return(0)
#define	YYABORT	return(1)
#define	YYERROR	goto yyerrlab
#define	NUMERO	258
#define	ID	259
#define	IF	260
#define	WHILE	261
#define	REPEAT	262
#define	CASO	263
#define	ASIG	264
#define	THEN	265
#define	ELSE	266
#define	FIN	267
#define	DO	268
#define	UNTIL	269
#define	CASE	270
#define	OF	271
#define	OTHERWISE	272
#define	MAI	273
#define	MEI	274
#define	DIF	275
#define	OR	276
#define	AND	277
#define	NOT	278
#define	MENOS_USUARIO	279

