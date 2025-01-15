
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int hora;
    int minutos;
    int segundos;
} horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

typedef struct {
    horario hora; 
    data data;  
    char texto[200];
} compromisso;
 
void preenchevetor (int i, compromisso *c)
{
	int j;
	for(j=0;j<i;j++)
	{
	//pegando as horas
	printf("Digite a hora do compromisso %d: ",j+1);
	scanf(" %d",&c[j].hora.hora);
	while (c[j].hora.hora>24||c[j].hora.hora<0)
	{
	scanf(" %d",&c[j].hora.hora);
	}
	printf("Digite os minutos do compromisso %d: ",j+1);
	scanf(" %d",&c[j].hora.minutos);
	while (c[j].hora.minutos>59||c[j].hora.minutos<0)
	{
	scanf(" %d",&c[j].hora.minutos);
	}
	printf("Digite os segundos do compromisso %d: ",j+1);
	scanf(" %d",&c[j].hora.segundos);
	while (c[j].hora.segundos>59||c[j].hora.segundos<0)
	{
	scanf(" %d",&c[j].hora.segundos);
	}
	//pegando a data
	printf("Digite o dia do compromisso %d: ",j+1);
	scanf(" %d",&c[j].data.dia);
	while (c[j].data.dia>31||c[j].data.dia<0)
	{
	scanf(" %d",&c[j].data.dia);
	}
	printf("Digite o mes do compromisso %d: ",j+1);
	scanf(" %d",&c[j].data.mes);
	while (c[j].data.mes>12||c[j].data.mes<0)
	{
	scanf(" %d",&c[j].data.mes);
	}
	printf("Digite o ano do compromisso %d: ",j+1);
	scanf(" %d",&c[j].data.ano);
	//pegando o texto do compromisso 
	printf("Digite a descricao do compromisso %d: ",j+1);
	scanf(" %[^\n]", c[j].texto);
	}
}
void imprimevetor(int i, compromisso *c)
{
	int j;
	for(j=0;j<i;j++)
	{
		printf("Data do compromisso %d:\n",j+1);
		printf("%d/%d/%d\n",c[j].data.dia,c[j].data.mes,c[j].data.ano);
		printf("Horas do compromisso: %d\n",j+1);
		printf("%d/%d/%d\n",c[j].hora.hora,c[j].hora.minutos,c[j].hora.segundos);
		printf("Descricção do compromisso %d\n",j+1);
		printf("%s",c[j].texto);
	}
}
int main()
{
	int n;
	printf("Digite o numero de compromissos:\n");
	scanf("%d",&n);
	compromisso c[n]; 
	preenchevetor(n,c);
	imprimevetor(n,c);
	return 0;
}
