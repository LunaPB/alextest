typedef union
{
char identificador;
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
#define	ID	4
#define	DEF	5
#define	DER	6
#define	IZQ	7
#define	AVA	8
#define	PMR	9
#define	PRW	10
#define	PRR	11
#define	ADD	12
#define	IGU	13
#define	PAI	14
#define	PAD	15
#define	LLI	16
#define	LLD	17
#define	PCO	18

