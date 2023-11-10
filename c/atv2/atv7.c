#include <stdio.h>

void datacoe();

int main()
{
    datacoe();
    return 0;
}

void datacoe()
{
    int dia, mes, ano, bi;
    printf("me informe uma data\n");
    printf("dia\n");
    scanf("%d", &dia);
    printf("mes\n");
    scanf("%d", &mes);
    printf("ano\n");
    scanf("%d", &ano); 
    bi = ((ano % 4 == 0 && ano % 100 ) || ano % 400 == 0);



    if(mes <= 12)
    {
        if(mes == 2 && bi && dia <= 28)
            printf("correto ano bissexto");
        else if (mes == 2 && dia <= 28)
            printf("correto ano nao bissexto");
        else
            printf("nao he um ano valido");
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <=30)
        printf("correto");
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        printf("correto");
    else
        printf("nao he uma data valida");

        
    
            
   
   
   
   
   // if ((ano % 4 == 0 && ano % 100 ) || ano % 400 == 0)

}