typedef union{
	int numero;


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
#define	ARRIBA	258
#define	ABAJO	259
#define	GIZQ	260
#define	GDER	261
#define	GUARDAPOS	262
#define	LEEPOS	263
#define	NUM	264

