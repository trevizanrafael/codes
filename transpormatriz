/*
Nome: Rafael Moraes Trevizan
RA: 2648938
Questão 08 - Faça um programa que receba uma matriz 5x5 valores do tipo int do usuário, um valor de
cada vez, e imprima a sua matriz transposta (Obs.: a matriz transposta é obtida permutando-se as linhas e
as colunas de uma matriz)

entrada de dados
matriz 5x5

saida 
matriz transposta

porcessamento
matriz ij trocar com ji com 
endereço axuliar
mostrar as matrizes
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
//Declarando as matrizes e variáveis
	int  zirtam[5][5],matriz[5][5],c,l;
//Iniciando números randômicos
	srand(time(NULL));
//Preenchendo o primeiro vetor
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			matriz[l][c]=(rand()+1)%100;
//Transpondo a matriz, invertendo linha com coluna			
	for(l=0;l<5;l++)
		for(c=0;c<5;c++)
			zirtam[l][c]=matriz[c][l];
//Mostrando as duas matrizes
for(l=0;l<5;l++)
{
printf("\n");
		for(c=0;c<5;c++)
			printf("%d ",matriz[l][c]);
}
printf("\n\n\n");
for(l=0;l<5;l++)
{
printf("\n");
		for(c=0;c<5;c++)
			printf("%d ",zirtam[l][c]);
}
return 0;
}



