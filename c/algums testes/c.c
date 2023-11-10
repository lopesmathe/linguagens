# include <math.h>
#include <stdio.h>

void mais();
void menos();
void vezes();
void divisao();

int main()
{
    mais();
    menos();
    vezes();
    divisao();
}

void mais()
{
    float num1, num2, resu1;
    printf("\nme informe um numero: ");
    scanf("%f", &num1);
    printf("\nme infome outro numero para a somatoria: ");
    scanf("%f", &num2);
    resu1 = num1 + num2;
    printf("\no resultado he %f", resu1);
}

void menos()
{
    float num3, num4, resu2;
    printf("\nme informe um numero: ");
    scanf("%f", &num3);
    printf("\nme infome outro numero para a subtraçao: ");
    scanf("%f", &num4);
    resu2 = num3 - num4;
    printf("\no resultado he %f", resu2);
}

void vezes()
{
    float num5, num6, resu3;
    printf("\nme fale um numero: ");
    scanf("%f", &num5);
    printf("\nagr me fale outro numero para a cona de vezes: ");
    scanf("%f", &num6);
    resu3 = num5 * num6;
    printf("o resultado he %f", resu3);
}

void divisao()
{
    float num7, num8, resu4;
    printf("\nme fale um numero");
    scanf("%f", &num7);
    printf("\nme diga outro numero para fazer a divisao: ");
    scanf("%f", &num8);
    resu4 = num7 / num8;
    printf("\no resultado he %f", resu4);
}



