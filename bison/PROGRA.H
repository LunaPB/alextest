typedef union
{ char identificador;
  char constante;
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
#define	NUM	3
#define	VAR	4
#define	PALM	5
#define	PALW	6
#define	PALR	7
#define	LLAI	8
#define	LLAD	9
#define	PARI	10
#define	PARD	11
#define	PCO	12
#define	ASIG	13
#define	SUB	14
#define	ADD	15
#define	MUL	16
#define	DIV	17
#define	MOD	18

