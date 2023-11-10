#include <stdio.h>

void l2();

int main()
{
    l2();
    return 0;
}

void l2()
{
    int num = 0, num1;

    do
    {
        printf("manda (0 EXIT)");
        scanf("%d", &num1);
        num += num1;
    } while (num1 != 0);
    printf("%d", num);
    
}
