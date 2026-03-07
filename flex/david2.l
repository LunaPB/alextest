%{
/*contador de lineas*/
int linea=0;

%}

id  [a-zA-Z]+
caracteres [\.]
%%

{id}  {printf("funcion: %s linea: %d\n ", yytext, linea); linea++;}
%%
void main()
{
/* FILE *file;


 file= fopen("c:\prueba.txt", "r");
  if (file==NULL)

	 exit(1);
	 yyin=file;*/
	 yylex();

      /*printf("numero de palabras: %d\n", palabras);
      printf("numeros de lineas: %d\n", lineas);*/
}

