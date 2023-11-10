#include <stdio.h>
#include <math.h>

void tri();

int main()
{
    tri();
    return 0;
}

void tri()
{
    int num1, num2, num3, call;
    printf("me fale tres valores para calcular o triangulo\n");
    printf("num1\n");
    scanf("%d", &num1);
    printf("num2\n");
    scanf("%d", &num2);
    printf("num3\n");
    scanf("%d", &num3);
    call = num1 + num2 > num3 && num2 + num3 > num1 && num3 + num1 > num2;

    if(call)
    {
        if(num1 == num2 && num2 == num3)
            printf("he equilatero");
        else if (num1 == num2 || num2 == num3 || num3 == num1)
            printf("he um isoscele");
        else
            printf("he um escaleno");
    }
    else
        printf("nao he um triangulo");

}
