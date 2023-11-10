# include <stdio.h>

void verificador();

int main()
{
    verificador();
    return 0;
}

void verificador()
{
    int n1, n2, n3;
    printf("me fale um valor\n");
    scanf("%d", &n1);
    if (n1 >10 && n1 <100)
        printf("ok\n");
    else
        printf("not ok");
    printf("me fale o segundo numero\n");
    scanf("%d", &n2);
    printf("me fale o terceiro numero\n");
    scanf("%d", &n3);

    if(n3 > 50)
        printf("ok\n");

    if(n2 < n3 || n2 > n3)
        printf("ok\n");
    
}