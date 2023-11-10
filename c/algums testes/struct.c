#include <stdio.h>

struct novo{
    int dado;
    float valor;
};

int main()
{
    struct novo variavel;
        variavel.dado = 20;
        variavel.valor = 10.10;
        printf("%d %.2f", variavel.dado, variavel.valor);
    };
    
