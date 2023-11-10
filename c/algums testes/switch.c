#include <stdio.h>

void bix();

int main()
{
    bix();
    return 0;
}

void bix()
{
    int opçao;
    printf("1 - facil\n");
    printf("2 - medio\n");
    printf("3 - dificil\n");
    printf("escolha a opça\n");
    scanf("%d", &opçao);

    switch (opçao)
    {
    case 1: printf("modo facil."); break;
    case 2: printf("modo medio"); break;
    case 3: printf("modo dificil"); break;
    default: printf("opçao invalida"); break;
    }

    printf("fim do bagulho");
}