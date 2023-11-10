#include <stdio.h>
#include <math.h>

void loja();

int main()
{
    loja();
}

void loja()
{
    float hamburger, cheeseburger, batataFrita, refrigerante, milkshake, resultado, custofinals, custofinald;
    printf("ola, me fale oq vc quer comprar");
    printf("\nquantos hamburger: ");
    scanf("%f", &hamburger);
    hamburger = hamburger * 2.50;
    printf("\nquantos Cheeseburger: ");
    scanf("%f", &cheeseburger);
    cheeseburger = cheeseburger * 3.30;
    printf("\nquantos batataFrita: ");
    scanf("%f", &batataFrita);
    batataFrita = batataFrita * 1.50;
    printf("\nquantos refrigerante: ");
    scanf("%f", &refrigerante);
    refrigerante = refrigerante * 0.50;
    printf("\nquantos milkshake: ");
    scanf("%f", &milkshake);
    milkshake = milkshake * 1.70;
    resultado = hamburger + cheeseburger + batataFrita + refrigerante + milkshake;
    custofinals = (resultado*12)/100;
    custofinald = (custofinals + resultado);
    printf("\no resultado he %f", custofinald);
}