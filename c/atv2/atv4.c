#include <stdio.h>

void pi();

int main()
{
    pi();
    return 0;
}

void pi()
{
    int num1;
    printf("me diga um valor, e eu falo se ele he par ou impar\n");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
        printf("he par\n");
    else
        printf("he impar\n");  
}