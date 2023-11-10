# include <stdio.h>

void anobi();

int main()
{
    anobi();
    return 0;
}

void anobi()
{
    int num1;
    printf("vamos ver se o ano he bi");
    scanf("%d", &num1);
    if(num1 % 2 == 0)
        printf("ele he");
    else
        printf("ele nao he");
}
