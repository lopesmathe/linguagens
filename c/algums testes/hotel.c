#include <stdio.h>

void hotel();

int main()
{
    hotel();
    return 0;
}

void hotel()
{
    float dias, u, totalaa, frigo, vrdiarias, totalsf, totalcf;
    vrdiarias = 327;
    printf("me informe quanto dias vc ficou no hotel\n");
    scanf("%f", &dias);
    totalsf = dias * vrdiarias;
    printf("me informe as despesas do frigobar (se nao ouve despesas coloque o numero 0)");
    scanf("%f", &frigo);
    totalcf = frigo + totalsf;
    totalaa = totalcf * 0.035;
    u = totalcf + totalaa;
    printf("o total a paga he %.2f", u);
}