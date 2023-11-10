#include <stdio.h>

void crazy();

int main()
{
    crazy();
    return 0;
}

void crazy()
{
    int item;
    do
    {
        printf("vc esta andando e ve uma parede, escolha o item de 1 a 10 para detonar ela\n");
            scanf("%d", &item);
        if (item == 2)
        {
            printf("explosao");
            break;
        } 
        else
        printf("rapaz");
    } 
    while (1);
    
}