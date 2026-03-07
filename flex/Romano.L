%{
int valor=0;
%}

imayor[VXLCDM]
vmayor[XLCDM]
xmayor[LCDM]
lmayor[CDM]
cmayor[DM]
finlinea \n
%%
I 		{valor++;}
V 		{valor=valor+5;}
X 		{valor=valor+10;}
L 		{valor=valor+50;}
C 		{valor=valor+100;}
D 		{valor=valor+500;}
M 		{valor=valor+1000;}
I{imayor} 	{valor--;yyless(1);}
V{vmayor} 	{valor=valor-5;yyless(1);}
X/{xmayor} 	{valor=valor-10;}
L/{lmayor} 	{valor=valor-50;}
C{cmayor} 	{valor=valor-100;yyless(1);}
D/M 		{valor=valor-500;}
{finlinea} {
		if(valor!=0)
		printf("decimal:%d\n\n\r",valor);
		valor=0;
	   }
%%
main()
{
 while (yylex());
}

