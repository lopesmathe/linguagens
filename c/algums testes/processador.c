#include <stdio.h>

void processador();

int main()
{
    processador();
    return 0;
}

void processador()
{
    int opcao, opcaogb;
    printf("com base na tabela");
    printf("core i5 e 4 ou 8gb");
    printf("core i7 e 8, 16gb");
    printf("core i9 e 16, 32gb");
    printf("me informe o procesador (5)");
    scanf("%d", &opcao);
    printf("e agr me informe quantos gb vc quer (4)");
    scanf("%d", &opcaogb);

    if (opcao == 5)
    {
        if( opcaogb == 4)
            printf("o valor he 3.648.00");
        else if( opcaogb == 8)
            printf("o valor he 4.379.00");
        else
            printf("o valor nao existe");
    }
    else if( opcao == 7)
    {
        if(opcaogb == 8)
            printf("o valor he 5.700.00");
        else if(opcaogb == 16)
            printf("o valor he 5.999.00");
        else
            printf("o valor nao existe");
    }   
    else if(opcao == 9)
    {
        if(opcaogb == 16)
            printf("o valor he 37.498.00");
        else if(opcaogb == 32)
            printf("o valor he 38.819.00");
        else
        printf("o valor nao existe");
    }
    else
        printf("o valor nao existe");
}