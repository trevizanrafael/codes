/*
Nome: Rafael Moraes Trevizan
RA: 2648938

Questão 10 - Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i2 - 1 se i = j;
A[i][j] = 4i3 - 5j2 + 1 se i > j:

entrada de dados
nao existe entrada, apenas a matriz, que será a saida

saida de dados
matriz 1010

processamento
Declarando variáveis
Preenchendo a matriz com a ordem de formação
Mostrando a matriz depois de formada
*/
#include <stdio.h>

int main() 
	{
//Declarando variáveis
    int matriz[10][10],i,j;
//Preenchendo a matriz com a ordem de formação
    for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			{
				if(i<j)
				matriz[i][j]=2*i+7*j;
				if(i==j)
				matriz[i][j]=3*i*i-1;
				if(i>j)
				matriz[i][j]=4*i*i*i-5*j*j+1;
			}

//Mostrando a matriz depois de formada
	for(i=0;i<10;i++)
	{
		printf("\n");
		for(j=0;j<10;j++)
			printf("%d ",matriz[i][j]);
	}
	
	return 0; 
	}


