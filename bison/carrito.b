%{
#include <stdio.h>
#include <conio.h>
#include <string.h>

#include "c:\turboc3\bin\flex\lexyy.c"

extern FILE *yyin;
extern FILE *yyout;

void yyerror(char *s);
void imprimir_base();
%}

%token ADELANTE ATRAS IZQUIERDA DERECHA ALTO
%start programa

%%

programa      : instrucciones
              ;

instrucciones : instruccion
              | instrucciones instruccion
              ;

instruccion   : ADELANTE  { fprintf(yyout, "  adelante();\n  delay(1000);\n"); }
              | ATRAS     { fprintf(yyout, "  atras();\n  delay(1000);\n"); }
              | IZQUIERDA { fprintf(yyout, "  izquierda();\n  delay(1000);\n"); }
              | DERECHA   { fprintf(yyout, "  derecha();\n  delay(1000);\n"); }
              | ALTO      { fprintf(yyout, "  alto();\n  delay(1000);\n"); }
              ;

%%

void main(void)
{
    clrscr();
    printf("\nIniciando el traductor del carrito...\n");

    /* Intentamos abrir el archivo de entrada */
    yyin = fopen("c:\\turboc3\\bin\\bison\\ruta.txt", "r");
    if (yyin == NULL) {
        printf("\nERROR FATAL: No se encuentra ruta.txt\n");
        printf("Revisa que la ruta sea correcta y no se llame ruta.txt.txt\n");
        printf("Presiona cualquier tecla para salir...\n");
        getch();
        return;
    }

    /* Intentamos abrir el archivo de salida */
    yyout = fopen("c:\\turboc3\\bin\\bison\\carrito.ino", "w");
    if (yyout == NULL) {
        printf("\nERROR FATAL: No se puede sobrescribir carrito.ino\n");
        printf("CIERRA EL ARDUINO IDE o borra el archivo viejo manualmente.\n");
        printf("Presiona cualquier tecla para salir...\n");
        getch();
        return;
    }

    printf("Archivos abiertos correctamente. Traduciendo...\n");
    
    imprimir_base();
    yyparse();
    fprintf(yyout, "}\n");

    fclose(yyin);
    fclose(yyout);

    printf("\nEXITO ABSOLUTO: Archivo carrito.ino generado correctamente.\n");
    printf("Presiona cualquier tecla para salir...\n");
    getch(); /* Pausa para que puedas leer la pantalla */
}

/* --- AQUI ESTAN LAS FUNCIONES QUE LE FALTABAN AL LINKER --- */

void yyerror(char *s)
{
    printf("Error Bison: %s\n", s);
}

void imprimir_base()
{
    fprintf(yyout, "const int N1A = 3;\n");
    fprintf(yyout, "const int N2A = 5;\n");
    fprintf(yyout, "const int N3B = 6;\n");
    fprintf(yyout, "const int N4B = 9;\n\n");
    
    fprintf(yyout, "void setup() {\n");
    fprintf(yyout, "  pinMode(N1A,OUTPUT);\n");
    fprintf(yyout, "  pinMode(N3B,OUTPUT);\n");
    fprintf(yyout, "  pinMode(N2A,OUTPUT);\n");
    fprintf(yyout, "  pinMode(N4B,OUTPUT);\n");
    fprintf(yyout, "  Serial.begin(9600);\n}\n\n");
    
    fprintf(yyout, "void atras(){\n  digitalWrite(N1A,HIGH);\n  digitalWrite(N2A,LOW);\n  digitalWrite(N3B,HIGH);\n  digitalWrite(N4B,LOW);\n}\n");
    fprintf(yyout, "void adelante(){\n  digitalWrite(N1A,LOW);\n  digitalWrite(N2A,HIGH);\n  digitalWrite(N3B,LOW);\n  digitalWrite(N4B,HIGH);\n}\n");
    fprintf(yyout, "void izquierda(){\n  digitalWrite(N1A,LOW);\n  digitalWrite(N2A,HIGH);\n  digitalWrite(N3B,LOW);\n  digitalWrite(N4B,LOW);\n}\n");
    fprintf(yyout, "void derecha(){\n  digitalWrite(N1A,LOW);\n  digitalWrite(N2A,LOW);\n  digitalWrite(N3B,LOW);\n  digitalWrite(N4B,HIGH);\n}\n");
    fprintf(yyout, "void alto(){\n  digitalWrite(N1A,LOW);\n  digitalWrite(N2A,LOW);\n  digitalWrite(N3B,LOW);\n  digitalWrite(N4B,LOW);\n}\n\n");
    
    fprintf(yyout, "void loop() {\n");
}