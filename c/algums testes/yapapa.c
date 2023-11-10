#include <stdio.h>

void bix();

int main()
{
    bix();
    return 0;
}

void bix()
{
    int ano;
    printf("digite um valor");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("he um ano bi");
    else
        printf("nao he");

}