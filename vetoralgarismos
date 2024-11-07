#include <stdio.h>
#include <stdlib.h>
#define q 4
int main()
{
//Declarando as variáveis
	int a,b,va[q],va1[q],vb[q],vb1[q],mostrar,i,j=0,soma[q+1],resultado;
//Lendo o valor do a e do b
	printf("digite o numero a:\n");
	scanf("%d",&a);
    printf("digite o numero b:\n");
	scanf("%d",&b);
printf("\n");
//Fazendo o vetor com o a
printf("Algarismos do a:\n");
	for (i=10000;i>=10;i=i/10)
	{
	mostrar=a%i;
    while (mostrar>=10)
    {
	mostrar=mostrar/10;
    }
	printf("%d\n",mostrar);
	va[j]=mostrar;
	j++;
	}
//Passando para outro vetor para a casa menos significativa ser a primeira
	j=0;
	for(i=q-1;i>-1;i--)
	{
	    va1[i]=va[j];
	    j++;
	}

	printf("\n\n\n");
    printf("Algarismos do b:\n");
//Fazendo a mesma coisa, só que com o número b
    j=0;
	for (i=10000;i>=10;i=i/10)
	{
	mostrar=b%i;
    while (mostrar>=10)
    {
	mostrar=mostrar/10;
    }
	printf("%d\n",mostrar);
	vb[j]=mostrar;
	j++;
	}
	j=0;
	for(i=q-1;i>-1;i--)
	{
	    vb1[i]=vb[j];
	    j++;
	}
//Escrevendo os dois numeros "invertidos"
	printf("\n\n\n");
	printf("\"A\" tendo a primeirqa casa a de valor menos significativa:\n");
	for(i=0;i<q;i++)
	    printf("%d",va1[i]);
	printf("\n\n\n");
	printf("\"B\" tendo a primeirqa casa a de valor menos significativa:\n");
	for(i=0;i<q;i++)
	    printf("%d",vb1[i]);
//Preenchendo o vetor da soma com 0, para caso de apenas 4 algarismos, ficar certo
	for(i=0;i<q+1;i++)
	soma[i]=0;
//Realizando a conta, utilizando a dica de somar as posições correspondentes. Se a soma ultrapassar
//10, subtraia 10 do resultado e some 1 à próxima
    j=0;
    for(i=q;i>0;i--)
    {
        if(va1[3]+vb1[3]>=10)
        soma[0]=1;
        if(va1[i]+vb1[i]>=10)
        {
            resultado=va1[i]+vb1[i]-10;
            soma[i]=resultado;
            va1[i-1]++;
            j++;
            continue;
        }
        if(va1[i]+vb1[i]<10)
        {
            resultado=va1[i]+vb1[i];
            soma[i]=resultado;
            j++;
            continue;
        }
    }
    printf("\n\n\nO valor da soma dois dois e:\n");
//Agora, escrevendo o número da soma dos dois numero, em ordem
    for(i=0;i<q+1;i++)
	    printf("%d",soma[i]);
}



