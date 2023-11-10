#include <stdio.h>

void assa();
int main(){
    assa();
    return 0;
}

assa(){
    long long int numero, resto, num0 = 0, num1 = 1;
    printf("manda");
    scanf("%lld", &numero);

    while (numero > 0)
    {
        resto = numero % 2;
        num0 += resto * num1;
        numero /= 2;
        num1 *= 10;
    }
    printf("%lld", num0);
    
    
    
}