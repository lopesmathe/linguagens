#include <stdio.h>

void pizza();

int main()
{
    pizza();
    return 0;
}

void pizza()
{
    float kgq, pizzata, fq, p, m, g, f, total;
    fq = 0.15;
    p = 6;
    m = 8;
    g = 10;
    f = 12;
    printf("me informe o preço do kg do queijo\n");
    scanf("%f", &kgq);
    printf("me informe o tamanho da pizza (1 = p, 2 = m, 3 = g, 4 = f)\n");
    scanf("%f", &pizzata);
    if(pizzata == 1)
    {
        total = (kgq * fq) * p;
        printf("o valor he %f", total);
    }
    else if(pizzata == 2)
    {
        total = (kgq * fq) * m;
        printf("o valor he %f", total);
    }
    else if(pizzata == 3)
    {
        total = (kgq * fq) * g;
        printf("o valor he %f", total);
    }
    else if(pizzata == 4)
    {
        total = (kgq * fq) * f;
        printf("o valor he %f", total);
    }

}