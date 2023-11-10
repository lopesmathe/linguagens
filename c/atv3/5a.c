#include <stdio.h>

void l1();

int main()
{
    l1();
    return 0;
}

void l1()
{
    int num1;
    printf("manda ae\n");
    scanf("%d", &num1);
    for (int i = 1; i <= num1; i++)
    {
        printf("%d\n", i);
    }
 
}