# include <stdio.h>

void candy();

int main()
{
    candy();
    return 0;
}

void candy()
{
    int resu;
    printf("qual foi o seu resultado\n");
    scanf("%d", &resu);
    for (int i = 1; i <= resu; i++)
    {
        printf("%d\n", i);
    }
    
}