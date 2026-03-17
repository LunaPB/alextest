%{
/* elimina las letras mayusculas */
%}
%%
[A-Z]+  ;
%%
void main(void)
{
yylex();
}
