typedef union
{
char *identificador;
char *constante;
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
#define	AVA	5
#define	COG	6
#define	DEJ	7
#define	ASIG	8
#define	DER	9
#define	IZQ	10
#define	MIR	11
#define	OBJ	12
#define	PAN	13
#define	TEC	14
#define	SUM	15
#define	RES	16
#define	MUL	17
#define	DIV	18
#define	MOD	19
#define	IGU	20
#define	PAI	21
#define	PAD	22
#define	SEP	23
#define	END	24

