# include <stdio.h>
# include <math.h>

void coentro();

int main()
{
    coentro();
    return 0;
}

void coentro()
{
    int num1, dpsdtd;
    printf("eae parceiro, manda um numero no peito do pai\n");
    scanf("%d", &num1);
    if(num1 == 50)
        printf("correto");
    else if(num1 >= 100)
        printf("correto");
    else if(num1 <= 99)
    {
        dpsdtd = 1 + num1;
        if(dpsdtd = 100)
            printf("correto");
        else    
        printf("o valor he %d", dpsdtd);  
    }
};