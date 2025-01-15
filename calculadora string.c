#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
     if (argc!=2)
    {
    	printf("Numero errado de argumentos.");
    	return 1;
	}
	size_t comprimento=strlen(argv[1]);
	char *expressao=argv[1],operador=\0;
	float resultado=0,n=0;
	char primeiro=expressao[0];
	if(!(isdigit(expressao[0])))
   	 printf("E necessario que comece com um numero.");
	if(!(isdigit(expressao[comprimento])))
   	 printf("E necessario que termine com um numero.");
    for(int i=0;i<comprimento;i++)
    {
   	 if(isdigit(expressao[i]))
   	 {
   		 n=atoi(expressao+i);
   		 if(operador==0)
   		 resultado=n;
   		 else
   		 {
   			 switch(operador){
   				 case '+':
   				 resultado+=n;
   				 break;
   				 case '-':
   				 resultado-=n;
   				 break;
   				 case 'x':
   				 resultado*=n;
   				 break;
   				 case '/':
   				 resultado/=n;
   				 break;
   			 }
   		 }
   	 }
   	 else
   	 {
   		 operador=expressao[i];
   	 }
    }
    printf("%f",resultado);
    return 0;
}
