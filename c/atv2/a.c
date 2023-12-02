#include <stdio.h>

void banana();

int main(){
    banana();
    return 0;
}

void banana(){
    int num1 = 1, num2 = 2, resu = 0;
    resu = num1 + num2;
    printf("%d", resu);
}