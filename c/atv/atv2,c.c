#include <math.h>
#include <stdio.h>

void conversor();

int main()
{
    conversor();
}

void conversor()
{
    float pes, metros, polegadas;
    printf("informe a altura do salto em metros");
    scanf("%f", &metros);
    polegadas =  39.37 * metros;
    pes = 3.28084 *  metros;
    printf("o resultado de metros para pes e polegadas he %f %f", pes, polegadas);
}