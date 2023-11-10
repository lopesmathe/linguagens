# include <stdio.h>
# include <math.h>

void calfinal();

int main()
{
    calfinal();
}

void calfinal()
{
    float valorcar, imposcar, distribcar, resucar;
    printf("ola, me fale o valor do carro e eu te darei o valor final");
    scanf("%f", &valorcar);
    imposcar = (valorcar*45)/100;
    distribcar = (valorcar*12)/100;
    resucar = valorcar + imposcar + distribcar;
    printf("o resultado he %f", resucar);
}
