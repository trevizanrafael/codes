#include <stdio.h>
int exemplo01()
{    
    int r,s;
    printf("escolha um numero\n");
    scanf("%d",&r);
    printf("escolha um numero\n");
    scanf("%d",&s);
    return s+r;
}
int main ()
{
    int valor;
    valor=exemplo01();
    printf("\no valor:\n%d",valor);
    return 0;
}
