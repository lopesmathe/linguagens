# include <stdio.h>

void duon();

int main()
{
    duon();
    return 0;
}

void duon()
{
    int s, valor;
    s = 2;
    printf("me diga um numero de 1 a 7\n");
    scanf("%d", &valor);
    if(s <= valor)
        printf("falso");
    else
        printf("verdade");
}