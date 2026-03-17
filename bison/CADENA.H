typedef union
{
  int constante;
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
#define	PCO	5
#define	SUB	6
#define	ADD	7

