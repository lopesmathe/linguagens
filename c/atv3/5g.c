#include <stdio.h>

void l7();

int main()
{
    l7();
    return 0;
}

void l7()
{
    int number, soma = 0;
    printf("manda");
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        soma += i;    
        printf("\n A soma de todos os numeros de 1 ate %d e igual a: %d", number, soma);        
    }
    //     soma = 0 + 0 = 0
    //     soma = 0 + 1 = 1
    //     soma = 1 + 2 = 3
    //     soma = 3 + 3 = 6
    //     soma = 6 + 4 = 10
    //     soma = 10 + 5 = 15
}