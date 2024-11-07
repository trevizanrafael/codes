
#include <stdio.h>
int main()
{
//Declarando as variáveis
	int i,vetor[10] = {2,4,35,50,23,17,9,2,27,5},maior,media,soma,aux,j,primo,valor=0;
	maior=vetor[0];
//Descobrindo qual o maior número dentro do vetor
for(i=0;i<10;i++)
		if(vetor[i]>maior)
			maior=vetor[i];
	printf("O maior numero do vetor e:\n%d",maior);
	printf("\n");
	soma=0;
//Somando todos os valores do vetor
	for(i=0;i<10;i++)
		soma=soma+vetor[i];
//Calculando a média
	media=soma/10;
	printf("O numero da media do vetor e:\n%d",media);
	printf("\n");
//Usando bubble sort para organizar por ordem crescente
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			if(vetor[j]>vetor[j+1])
				{
					aux=vetor[j];
					vetor[j]=vetor[j+1];
					vetor[j+1]=aux;
				}
	printf("O vetor de forma crescente e:\n");
//Descobrindo quais valores são primos
for(i=0;i<10;i++)
		printf("%d ",vetor[i]);
		printf("\n");
	
	for(i=0;i<10;i++)
	{
		primo=1;
		for(j=2;j<(vetor[i]/2)+1;j++)
		{
			if(vetor[i]%j==0)
				{
					primo=0;
					break;
				}
		}
		if(primo==1)
		printf("%d e primo.\n",vetor[i]);
	}
	
	return 0;
}



