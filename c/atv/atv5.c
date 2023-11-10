#include <stdio.h>
#include <math.h>

void formulademerda();

int main()
{
    formulademerda();
}

void formulademerda()
{
    float a, b, c, resu;
    printf("\nme informe o valor de cada um dos lados: ");
    printf("\nlado 1: ");
    scanf("%f", &a);
    printf("\nlado 2: ");
    scanf("%f", &b);
    printf("\nlado 3: ");
    scanf("%f", &c);
    resu = (a + b + c)/2;
    resu1 = a - resu;
    resu2 = b - resu;
    resu3 = c - resu;
    resugeral = (resu1 * resu2 * resu3)* resu;
    printf("o resultado he %f", resugeral);
}

