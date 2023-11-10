#include <stdio.h>

void l5();

int main()
{
    l5();
    return 0;
}

void l5()
{
    long long int numero, num0 = 0, resto, num1 = 1;
    printf("manda");
    scanf("%lld", &numero);

    if (numero == 0) {
        printf("O número binário correspondente é: 0\n");
    }

    while (numero > 0)         // 22
    {
        resto = numero % 2; // resto recebe 0 OU 1, 22 % 2 = 0
        num0 += resto * num1; //  0 recebe 0 + 0 * 1 = 0
        numero /= 2;        // 22 recebe 22 / 2 = 11
        num1 *= 10;         // 1 recebe 1 * 10 = 10
        
    }       // 0        1       //  1       //  0
            // 0        1       //  1       //  0
            // 11       5       //  2       //  0
            // 10       100     //  1000    //  10000

    printf("O número binário correspondente é: %lld\n", num0);    

    

}