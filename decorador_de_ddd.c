// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int ddd[8],i=0;
    srand(time(NULL));
    for(int i=0;i<1;i++)
    {
        ddd[i]=rand()/10000000;
        if(ddd[i]<10)
    {
            i--;
            continue;
    }
        if(ddd[i]>99)
    {   
            i--;
            continue;
    }
        if(ddd[i]%10==0)
    {
            i--;
            continue;
    }
        if(ddd[i]==25||ddd[i]==26||ddd[i]==29||ddd[i]==36||ddd[i]==39||ddd[i]==52)
    {
            i--;
            continue;
    } 
        if(ddd[i]==56||ddd[i]==57||ddd[i]==58||ddd[i]==59||ddd[i]==72||ddd[i]==76)
    {
            i--;
            continue;
    }
        if(ddd[i]==78||ddd[i]==23)
    {
            i--;
            continue;
    }
    }
    i=0;
    printf("DDD:\n%03d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",ddd[0]);
    if(ddd[i] == 11 || ddd[i] == 13 || ddd[i] == 14 || ddd[i] == 15 || ddd[i] == 16 || ddd[i] == 17 || ddd[i] == 18 || ddd[i] == 19 || ddd[i] == 12)
            printf("DDD %d: São Paulo.\n", ddd[i]);
        else if(ddd[i] == 41 || ddd[i] == 43 || ddd[i] == 44 || ddd[i] == 45 || ddd[i] == 46 || ddd[i] == 42)
            printf("DDD %d: Paraná.\n", ddd[i]);
        else if(ddd[i] == 47 || ddd[i] == 48 || ddd[i] == 49)
            printf("DDD %d: Santa Catarina.\n", ddd[i]);
        else if(ddd[i] == 51 || ddd[i] == 52 || ddd[i] == 53 || ddd[i] == 54 || ddd[i] == 55)
            printf("DDD %d: Rio Grande do Sul.\n", ddd[i]);
        else if(ddd[i] == 71 || ddd[i] == 73 || ddd[i] == 74 || ddd[i] == 75 || ddd[i] == 77)
            printf("DDD %d: Bahia.\n", ddd[i]);
        else if(ddd[i] == 61)
            printf("DDD %d: Distrito Federal.\n", ddd[i]);
        else if(ddd[i] == 62 || ddd[i] == 64)
            printf("DDD %d: Goiás.\n", ddd[i]);
        else if(ddd[i] == 65 || ddd[i] == 66)
            printf("DDD %d: Mato Grosso.\n", ddd[i]);
        else if(ddd[i] == 67)
            printf("DDD %d: Mato Grosso do Sul.\n", ddd[i]);
        else if(ddd[i] == 82)
            printf("DDD %d: Alagoas.\n", ddd[i]);
        else if(ddd[i] == 84)
            printf("DDD %d: Rio Grande do Norte.\n", ddd[i]);
        else if(ddd[i] == 85 || ddd[i] == 88)
            printf("DDD %d: Ceará.\n", ddd[i]);
        else if(ddd[i] == 86 || ddd[i] == 89)
            printf("DDD %d: Piauí.\n", ddd[i]);
        else if(ddd[i] == 81 || ddd[i] == 87)
            printf("DDD %d: Pernambuco.\n", ddd[i]);
        else if(ddd[i] == 83)
            printf("DDD %d: Paraíba.\n", ddd[i]);
        else if(ddd[i] == 91 || ddd[i] == 93 || ddd[i] == 94)
            printf("DDD %d: Pará.\n", ddd[i]);
        else if(ddd[i] == 92 || ddd[i] == 97)
            printf("DDD %d: Amazonas.\n", ddd[i]);
        else if(ddd[i] == 95)
            printf("DDD %d: Roraima.\n", ddd[i]);
        else if(ddd[i] == 96)
            printf("DDD %d: Amapá.\n", ddd[i]);
        else if(ddd[i] == 98 || ddd[i] == 99)
            printf("DDD %d: Maranhão.\n", ddd[i]);
        else if(ddd[i] == 79)
            printf("DDD %d: Sergipe.\n", ddd[i]);
        else if(ddd[i] == 68)
            printf("DDD %d: Acre.\n", ddd[i]);
        else if(ddd[i] == 69)
            printf("DDD %d: Rondônia.\n", ddd[i]);
        else if(ddd[i] == 63)
            printf("DDD %d: Tocantins.\n", ddd[i]);
        else if(ddd[i] == 27 || ddd[i] == 28)
            printf("DDD %d: Espírito Santo.\n", ddd[i]);
        else if(ddd[i] == 21 || ddd[i] == 22 || ddd[i] == 24)
            printf("DDD %d: Rio de Janeiro.\n", ddd[i]);
        else if(ddd[i] == 31 || ddd[i] == 32 || ddd[i] == 33 || ddd[i] == 34 || ddd[i] == 35 || ddd[i] == 37 || ddd[i] == 38)
            printf("DDD %d: Minas Gerais.\n", ddd[i]);

    
    return 0;
}
