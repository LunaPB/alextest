
/*  A Bison parser, made from compila.cpp  */

#define	NUM	258
#define	VAR	259
#define	NEG	260

#line 1 "compila.cpp"

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

#line 42 "compila.cpp"
typedef union {char identificador;
	int constante;
	} YYSTYPE;

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
#include <stdio.h>

#ifndef __STDC__
#define const
#endif



#define	YYFINAL		102
#define	YYFLAG		-32767
#define	YYNTBASE	22

#define YYTRANSLATE(x) ((unsigned)(x) <= 260 ? yytranslate[x] : 44)

static const char yytranslate[] = {     0,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,  10,   2,   2,  20,
  21,   8,   7,   2,   6,   2,   9,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,  14,   2,
   5,   2,   2,   2,   2,   2,  16,   2,   2,   2,
   2,   2,  15,   2,   2,   2,  12,   2,   2,   2,
   2,  18,   2,   2,   2,   2,  19,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,  13,   2,  17,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
   2,   2,   2,   2,   2,   1,   2,   3,   4,  11
};

static const short yyrline[] = {     0,
  56,  56,  57,  58,  59,  60,  61,  64,  65,  66,
  67,  68,  72,  73,  74,  75,  76,  77,  78,  79,
  82,  83,  86,  87, 102, 102, 103, 106, 107, 119,
 120, 121, 122, 123, 124, 125, 126, 127, 129, 130,
 131, 132, 136, 151, 166, 190, 191, 199, 200, 214,
 214, 215, 215, 216, 216, 217, 217, 218, 218, 219,
 219, 220, 221, 222, 225, 226, 227, 228, 229, 230,
 232, 233, 234
};

static const char * const yytname[] = {     0,
"error","$illegal.","NUM","VAR","'='","'-'","'+'","'*'","'/'","'%'",
"NEG","'M'","'{'","';'","'I'","'C'","'}'","'R'","'W'","'('",
"')'","programa"
};

static const short yyr1[] = {     0,
  22,  22,  22,  22,  22,  22,  22,  23,  23,  23,
  23,  23,  24,  24,  24,  24,  24,  24,  24,  24,
  25,  25,  26,  27,  26,  26,  26,  28,  28,  29,
  29,  29,  29,  29,  29,  29,  29,  29,  30,  30,
  30,  30,  31,  32,  33,  34,  34,  35,  35,  36,
  35,  37,  35,  38,  35,  39,  35,  40,  35,  41,
  35,  35,  35,  35,  42,  42,  42,  42,  42,  42,
  43,  43,  43
};

static const short yyr2[] = {     0,
   0,   5,   9,   4,   3,   4,   1,   0,   3,   1,
   1,   1,   3,   2,   1,   2,   2,   1,   1,   2,
   1,   1,   0,   0,   2,   1,   2,   0,   1,   0,
   3,   4,   4,   5,   2,   3,   3,   4,   1,   1,
   1,   1,   2,   2,   3,   0,   1,   1,   1,   0,
   4,   0,   4,   0,   4,   0,   4,   0,   4,   0,
   3,   3,   2,   2,   0,   3,   2,   5,   3,   4,
   0,   2,   2
};

static const short yydefact[] = {   0,
   7,  19,  18,  71,   8,   8,  21,  22,  24,  10,
  15,  12,  20,  17,  71,  71,  67,   8,  24,  24,
  26,  28,  30,   8,  14,  16,  69,  66,  73,  72,
   0,  24,   8,  28,  28,  27,  29,   5,  25,   9,
  13,   0,  70,  28,  65,   6,   4,  42,  47,   0,
   0,  35,  39,  40,  41,   0,  46,  68,   2,  24,
  43,  44,  31,  36,   0,  37,  65,  32,  48,  49,
  60,   0,  45,  33,  38,  28,   0,  63,  64,   0,
   0,   0,   0,   0,  34,  65,  61,  62,   0,   0,
   0,   0,   0,   3,  51,  53,  55,  57,  59,   0,
   0,   0
};

static const short yydefgoto[] = {   100,
     9,    10,    11,    22,    23,    38,    39,    52,    53,    54,
    55,    56,    73,    80,    81,    82,    83,    84,    77,    12,
    17
};

static const short yypact[] = {    62,
-32767,    -7,    14,    41,   101,   115,-32767,-32767,     9,   111,
   107,-32767,-32767,-32767,-32767,-32767,   125,   115,     9,     9,
    16,    35,-32767,   115,    18,-32767,   131,   119,-32767,-32767,
    59,     9,   115,    35,    35,-32767,-32767,-32767,    42,-32767,
-32767,    63,-32767,    35,    97,-32767,-32767,-32767,-32767,    91,
   105,    94,-32767,-32767,-32767,   110,    51,-32767,-32767,    10,
-32767,-32767,    97,-32767,    11,   123,    97,-32767,-32767,-32767,
-32767,    11,    86,    97,-32767,    35,    11,    76,-32767,   118,
   106,   128,   129,   130,-32767,    97,    81,-32767,    11,    11,
    11,    11,    11,-32767,    27,    52,    15,    92,    81,   143,
   144,-32767
};

static const short yypgoto[] = {-32767,
     0,-32767,-32767,   -16,-32767,   -33,-32767,    88,-32767,-32767,
-32767,-32767,   -52,-32767,-32767,-32767,-32767,-32767,-32767,   -10,
   126
};


#define	YYLAST		145


static const short yytable[] = {  24,
  46,  47,  34,  35,  19,  20,  13,  33, -23, -23,
  59,  21,  21,  69,  70,  44,  71,  32, -23,  78,
 -52, -50, -54,  40,  87, -23, -23,  14,  57,  36,
  72,  41,  45, -50,  60,  79,  95,  96,  97,  98,
  99,  64,  86,  67,  48,  49, -46,  79,  15,  16,
   4,  37,  68,  48,  49,  75,  76, -52, -50,  50,
  51,  -1,   1,  85,   2,   3,  -8,  43,  50,  51,
   4,  58,  79,   5,   6,  94,   7,   8,  -8,  -8,
  -8, -52, -50, -54, -56, -58, -52, -50, -54, -56,
 -58, -52, -50, -54,  61, -58,  88, -52, -50, -54,
 -56,  79,   4,   2,   3,   4,  79,  63,  62,   4,
  25,  90,  79,  18,  65,   7,   8,   2,   3,   4,
  26,  29,  30,   4,  89, -65, -65,  29,  30,   7,
   8,   4,  31,  29,  30,  91,  74,  92,  42,  93,
  27,  28, 101, 102,  66
};

static const short yycheck[] = {  10,
  34,  35,  19,  20,   5,   6,  14,  18,   0,   0,
  44,   3,   3,   3,   4,  32,   6,  18,   9,  72,
   6,   7,   8,  24,  77,  17,  17,  14,  39,  14,
  20,  14,  33,   7,  45,  21,  89,  90,  91,  92,
  93,  52,  76,  60,   3,   4,   5,  21,   8,   9,
   9,  17,  63,   3,   4,  66,  67,   6,   7,  18,
  19,   0,   1,  74,   3,   4,   5,   9,  18,  19,
   9,   9,  21,  12,  13,  86,  15,  16,  17,  18,
  19,   6,   7,   8,   9,  10,   6,   7,   8,   9,
  10,   6,   7,   8,   4,  10,  21,   6,   7,   8,
   9,  21,   9,   3,   4,   9,  21,  14,   4,   9,
   4,   6,  21,  13,   5,  15,  16,   3,   4,   9,
  14,   3,   4,   9,   7,  15,  16,   3,   4,  15,
  16,   9,   8,   3,   4,   8,  14,   9,   8,  10,
  15,  16,   0,   0,  57
};
#define YYPURE 1

#line 2 "bison.simple"

/* Skeleton output parser for bison,
   copyright (C) 1984 Bob Corbett and Richard Stallman


/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYFAIL		goto yyerrlab;

#define YYTERROR	1

#ifndef YYIMPURE
extern int yylex( void) ;
#define YYLEX		yylex()
#endif

#ifndef YYPURE
extern int yylex( YYLTYPE *, YYLTYPE *) ;
#define YYLEX		yylex(&yylval, &yylloc)
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYIMPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/

int yynerr;			/*  number of parse errors so far       */

#ifdef YYDEBUG
int yydebug = 0;		/*  nonzero means print parse trace	*/
#endif

#endif  /* YYIMPURE */


/*  YYMAXDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYMAXDEPTH
#define YYMAXDEPTH 200
#endif

/*  YYMAXLIMIT is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#ifndef YYMAXLIMIT
#define YYMAXLIMIT 10000
#endif


#line 167 "bison.simple"
int
yyparse()
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  YYLTYPE *yylsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYMAXDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYMAXDEPTH];	/*  the semantic value stack		*/
  YYLTYPE yylsa[YYMAXDEPTH];	/*  the location stack			*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */
  YYLTYPE *yyls = yylsa;

  int yymaxdepth = YYMAXDEPTH;

#ifndef YYPURE
  int yychar;
  YYSTYPE yylval;
  YYLTYPE yylloc;
#endif

#ifdef YYDEBUG
  extern int yydebug;
#endif


  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerr = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
  yylsp = yyls;

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yymaxdepth - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      YYLTYPE *yyls1 = yyls;
      short *yyss1 = yyss;

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yymaxdepth);

      yyss = yyss1; yyvs = yyvs1; yyls = yyls1;
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yymaxdepth >= YYMAXLIMIT)
	yyerror("parser stack overflow");
      yymaxdepth *= 2;
      if (yymaxdepth > YYMAXLIMIT)
	yymaxdepth = YYMAXLIMIT;
      yyss = (short *) malloc (yymaxdepth * sizeof (*yyssp));
      memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) malloc (yymaxdepth * sizeof (*yyvsp));
      memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) malloc (yymaxdepth * sizeof (*yylsp));
      memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yymaxdepth);
#endif

      if (yyssp >= yyss + yymaxdepth - 1)
	YYABORT;
    }

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
yyresume:

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Next token is %d (%s)\n", yychar, yytname[yychar1]);
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen]; /* implement default value of the action */

#ifdef YYDEBUG
  if (yydebug)
    {
      if (yylen == 1)
	fprintf (stderr, "Reducing 1 value via line %d, ",
		 yyrline[yyn]);
      else
	fprintf (stderr, "Reducing %d values via line %d, ",
		 yylen, yyrline[yyn]);
    }
#endif

   /* the action file gets copied in in place of this dollarsign */

  switch (yyn) {

case 4:
#line 58 "compila.cpp"
{cuentae++;printf("FALTA M\n");;
    break;}
case 5:
#line 59 "compila.cpp"
{cuentae++;printf("FALTA M {\n");;
    break;}
case 6:
#line 60 "compila.cpp"
{cuentae++;printf("FALTA '{'\n");;
    break;}
case 13:
#line 72 "compila.cpp"
{let=yyvsp[-1].identificador;inserta(raiz,let,tipo,0);genera2("",let);;
    break;}
case 14:
#line 73 "compila.cpp"
{let=yyvsp[0].identificador;printf("LINEA %d: FALTA ';' EN DECLARACION DE '%c'\n",linea-1,let);;
    break;}
case 15:
#line 74 "compila.cpp"
{printf("LINEA %d:  DECLARACION INCORRECTA\n",linea-1);;
    break;}
case 16:
#line 75 "compila.cpp"
{cuentae++;printf("LINEA %d: DECLARACION INCORRECTA\n",linea);;
    break;}
case 17:
#line 76 "compila.cpp"
{let=yyvsp[-1].identificador;cuentae++;printf("LINEA %d: A %c LE FALTO EL TIPO DE DATO\n",linea,let);;
    break;}
case 18:
#line 77 "compila.cpp"
{let=yyvsp[0].identificador;cuentae++;printf("LINEA %d: DECLARACION INCORRECTA FALTA EL TIPO DE DATO Y ';'\n",linea-1);;
    break;}
case 19:
#line 78 "compila.cpp"
{cuentae++;printf("LINEA %d: ERROR DE LA CONSTANTE \n ",linea);;
    break;}
case 20:
#line 79 "compila.cpp"
{cuentae++;printf("LINEA %d: ERROR DE LA CONSTANTE \n",linea);;
    break;}
case 21:
#line 82 "compila.cpp"
{if(a==0){strcpy(tipo,"int");if(cuentae==0)  genera4(" DB ");};
    break;}
case 22:
#line 83 "compila.cpp"
{if(a==0){strcpy(tipo,"char");if(cuentae==0)  genera4(" DB ");};
    break;}
case 24:
#line 88 "compila.cpp"
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
	;
    break;}
case 26:
#line 102 "compila.cpp"
{printf("LINEA %d: ERROR DE LA CONSTANTE ",linea);;
    break;}
case 27:
#line 103 "compila.cpp"
{printf("LINEA %d: ERROR DE LA CONSTANTE \n",linea);;
    break;}
case 28:
#line 106 "compila.cpp"
{printf("FALTA '}'\n");;
    break;}
case 29:
#line 107 "compila.cpp"
{   if(cuentae==0)
		{
			genera1("RET");
			genera1("MYPROC ENDP");
			genera1("MYCODE ENDS");
			genera1("END");
		}
	;
    break;}
case 35:
#line 124 "compila.cpp"
{cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);;
    break;}
case 36:
#line 125 "compila.cpp"
{cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);;
    break;}
case 37:
#line 126 "compila.cpp"
{cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);;
    break;}
case 38:
#line 127 "compila.cpp"
{cuentae++;printf("LINEA %d: FALTA ';' EN LA INSTRUCCION\n",linea-1);;
    break;}
case 42:
#line 132 "compila.cpp"
{cuentae++;printf("LINEA %d: ERROR DE LA CONSTANTE \n",linea);;
    break;}
case 43:
#line 136 "compila.cpp"
{let=yyvsp[0].identificador;
			if(!buscanodo(raiz,yyvsp[0].identificador))
			 {
				cuentae++;
				printf("LINEA %d: VARIABLE '%c' NO DECLARADA EN READ \n",linea,let);
			 }
			 if(cuentae==0)
			 {
				 genera1("MOV AH,01H\nINT 21H");
				 genera3("MOV",yyvsp[0].identificador);
				 genera1(",AL");
			 }
		;
    break;}
case 44:
#line 151 "compila.cpp"
{let=yyvsp[0].identificador;
		 if(!buscanodo(raiz,yyvsp[0].identificador))
		 {
			cuentae++;
			printf("LINEA %d: VARIABLE '%c' NO DECLARADA EN WRITE \n",linea,let);
		 }
		 if(cuentae==0)
		 {
			 genera1("MOV AH,09H\n 21H");
			 genera4("MOV AL");
			 genera2(",",yyvsp[0].identificador);
		 }
	  ;
    break;}
case 45:
#line 166 "compila.cpp"
{
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
		;
    break;}
case 46:
#line 190 "compila.cpp"
{cuentae++; printf("LINEA %d: ASIGNACION NO VALIDA \n",linea);;
    break;}
case 47:
#line 191 "compila.cpp"
{cuentae=0;let=yyvsp[0].identificador;
		if(buscatipo(raiz,yyvsp[0].identificador,"int")==0)
		{
			cuentae++;
			printf("LINEA %d: ASIGNACION NO VALIDA EN TIPO DE DATO DE VARIABLE '%c' \n",linea,let);
		}
	;
    break;}
case 48:
#line 199 "compila.cpp"
{if(cuentae==0)genera2("",yyvsp[0].constante);;
    break;}
case 49:
#line 200 "compila.cpp"
{let=yyvsp[0].identificador;
		if(!buscanodo(raiz,yyvsp[0].identificador))
		{       cuentae++;
			printf("LINEA %d: EXPRESION NO VALIDA VARIABLE '%c' NO DECLARADA \n",linea,let);
		}
		else
		if(buscatipo(raiz,yyvsp[0].identificador,"int")==0)
		{
			cuentae++;
			printf("LINEA %d: EXPRESION NO VALIDA EN TIPO DE DATO DE VARIABLE '%c' \n",linea,let);
		}
		else
			genera2("",yyvsp[0].identificador);
    ;
    break;}
case 50:
#line 214 "compila.cpp"
{if(cuentae==0)genera4("ADD AX,");;
    break;}
case 52:
#line 215 "compila.cpp"
{if(cuentae==0)genera4("SUB AX,");;
    break;}
case 54:
#line 216 "compila.cpp"
{if(cuentae==0)genera4("MUL AX,");;
    break;}
case 56:
#line 217 "compila.cpp"
{if(cuentae==0)genera4("DIV AX,");;
    break;}
case 58:
#line 218 "compila.cpp"
{if(cuentae==0)genera4("MOD AX,");;
    break;}
case 60:
#line 219 "compila.cpp"
{if(cuentae==0)genera4("NEG");;
    break;}
case 63:
#line 221 "compila.cpp"
{pari++;;
    break;}
case 64:
#line 222 "compila.cpp"
{pard++;;
    break;}
case 67:
#line 227 "compila.cpp"
{cuentae++;printf("LINEA %d: ERROR EN COMENTARIO",linea);;
    break;}
case 69:
#line 229 "compila.cpp"
{cuentae++;printf("LINEA %d: FALTA CERRAR COMENTARIO \n",linea);;
    break;}
case 70:
#line 230 "compila.cpp"
{cuentae++;printf("LINEA %d: FALTA INICIO COMENTARIO \n",linea);;
    break;}
}
#line 308 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#ifdef YYDEBUG
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerr;
      yyerror("parse error");
    }

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#ifdef YYDEBUG
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#ifdef YYDEBUG
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#ifdef YYDEBUG
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}


#line 236 "compila.cpp"


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