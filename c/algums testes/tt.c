#include <stdio.h>

void bayone();

int main(){
    bayone();
    return 0;
}

void bayone(){
    int num1=11;
    printf("o valor he = %d\n", num1);
    printf("o valor he = %p\n", &num1);
}