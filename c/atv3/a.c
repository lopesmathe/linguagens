#include <stdio.h>

void aassa();

int main(){
    aassa();
    return 0;
}

void aassa(){
    long long int numero, resto, n = 0, nn = 1;
    printf("as");
    scanf("%lld", &numero);
    while (numero > 0)
    {
        resto = numero % 2;
        n += resto * nn;
        numero /= 2;
        nn *= 10; 
    }
    printf("%lld", n);
    }
