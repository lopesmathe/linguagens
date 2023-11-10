#include <stdio.h>

void inddpol();

int main()
{
    inddpol();
    return 0;
}

void inddpol()
{
    float lisa, lisb, lisc, totaly;
    printf("digite o indice de poluiçao\n");
    scanf("%f %f %f", &lisa, &lisb, &lisc);
    totaly = lisa + lisb + lisc;
    printf("%f\n", totaly);
    if (totaly >= 0.05 && totaly < 0.25)
        printf("tudo normal\n");
    else if (totaly >= 0.26 && totaly < 0.30)
    {
        printf("chamada de suspensao lista A\n");
        printf("Aviso para as industrias da lista B serem notificadas\n");
        printf("Aviso para as industrias da lista c serem notificadas\n");
    }
    else if (totaly >= 0.31 && totaly < 0.40)
    {
        printf("chamada de suspensao lista A\n");
        printf("chamada de suspensao lista b\n");
        printf("Aviso para as industrias da lista c serem notificadas\n");
    }
    else if (totaly >= 0.50)
    {
        printf("chamada de suspensao lista A\n");
        printf("chamada de suspensao lista b\n");
        printf("chamada de suspensao lista c\n");
    }
    else
        printf("operacao finalizada\n");
}