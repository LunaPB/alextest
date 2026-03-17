%{
#include <stdio.h>
#include <conio.h>
/* Esta ruta apunta a donde Bison generara tu archivo .h */
#include "c:\turboc3\bin\bison\carrito.h"
%}

adelante  [aA][dD][eE][lL][aA][nN][tT][eE]
atras     [aA][tT][rR][aA][sS]
izquierda [iI][zZ][qQ][uU][iI][eE][rR][dD][aA]
derecha   [dD][eE][rR][eE][cC][hH][aA]
alto      [aA][lL][tT][oO]

%%

{adelante}  { return ADELANTE; }
{atras}     { return ATRAS; }
{izquierda} { return IZQUIERDA; }
{derecha}   { return DERECHA; }
{alto}      { return ALTO; }

[ \t\n\r]   ;
.           ;

%%