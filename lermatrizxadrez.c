/*
Nome: Rafael Moraes Trevizan
RA: 2648938

entrada de dados
matriz 8x8

saida de dados
soma peao e bispo
qtd ausencia
qtdpecas

processamento
ler a matriz 
laco de repeticao
se 1
q1+
... 
se 6
q6+
mostrar valores
*/
#include <stdio.h>

int main() 
	{
//Declarando a matriz do tabuleiro
    int matriz[8][8] = {
        {1, 3, 0, 5, 4, 0, 2, 1},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 6, 0},
        {1, 0, 0, 1, 1, 0, 0, 1},
        {0, 1, 0, 4, 0, 0, 1, 0},
        {0, 0, 3, 1, 0, 0, 1, 1},
        {1, 0, 6, 6, 0, 0, 1, 0},
        {1, 0, 5, 0, 1, 1, 0, 6}
    					};
//Declarado as variáveis
	int l,c,q0=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0;
//Verificando a quantidade de cada peça
	for(l=0;l<8;l++)
		for(c=0;c<8;c++)
		{
			if(matriz[l][c]==0)
			q0++;
			if(matriz[l][c]==1)
			q1++;
			if(matriz[l][c]==2)
			q2++;
			if(matriz[l][c]==3)
			q3++;
			if(matriz[l][c]==4)
			q4++;
			if(matriz[l][c]==5)
			q5++;
			if(matriz[l][c]==6)
			q6++;
		}
//Respondendo as perguntas
	printf("a) Determine a soma total entre peoes e bispos e a quantidade de posicoes com ausencia de pecas:\n%d e %d",q1+q4,q0);
	printf("\n\nb) Determine qual a quantidade de cada tipo de peca no tabuleiro:\n");
	printf("%d espacos vazios %d peoes %d cavalos %d torres %d bispos %d reis %d rainhas",q0,q1,q2,q3,q4,q5,q6);
	
	return 0; 
	}




