
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
#ifndef YYSTYPE
#define YYSTYPE int
#endif
#define	ADELANTE	3
#define	ATRAS	4
#define	IZQUIERDA	5
#define	DERECHA	6
#define	ALTO	7

