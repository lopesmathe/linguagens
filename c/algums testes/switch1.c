#include <stdio.h>

void babuino();

int main()
{
    babuino();
    return 0;
}

void babuino()
{
    int opçao;
    printf("escolha qual porduto vc quer comprar\n");
    printf("1 - maça\n");
    printf("2 - banana\n");
    printf("3 - grilo\n");
    printf("4 - cenoura\n");
    printf("5 - bolo\n");
    printf("6 - radio\n");
    printf("7 - sql\n");
    scanf("%d", &opçao);

    switch (opçao)
    {
    case 1: printf("opçao 1 - banana"); break;
    case 2: printf("opçao 2 - maça"); break;
    case 3: printf("opçao 3 - grilo"); break;
    case 4: printf("opçao 4 - cenoura"); break;
    case 5: printf("opçao 5 - bolo"); break;
    case 6: printf("opçao 6 - radio"); break;
    case 7: printf("opçao 7 - sql"); break;
    default: printf("nada aver irmao"); break;
    }
}
