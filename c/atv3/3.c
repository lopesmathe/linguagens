#include <stdio.h>

void tomb();

int main()
{
    tomb();
    return 0;
}

void tomb()
{
    int item, a = 0, b = 0, c = 0;
    printf("me infome o item 1) Arma; 2) Medipack; 3) Tesouro\n");
    do
    {
        printf("qual he o item\n");
        scanf("%d", &item);
        if (item == 1)
            a++;
        else if (item == 2)
            b++;
        else if (item == 3)
            c++;
        else
            printf("man error\n");
    } 
    while (a + b + c <=  19);
    printf("vc coletou\n");
    printf("armas %d\n", a);
    printf("medipack %d\n", b);
    printf("tesoutos %d\n", c);
    
}