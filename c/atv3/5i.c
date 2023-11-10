#include <stdio.h>

void l9();

int main(){
    l9();
    return 0;
}

void l9(){
    int num, ba = 1;
    printf("manda");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        ba *= i;
        // 1 = 1 . 1 = 1
        // 1 = 1 . 2 = 2
        // 2 = 2 . 3 = 6
        // 6 = 6 . 4 = 24
        //24 = 24 . 5 = 120
    }

    printf("o resultado de %d he %d", num, ba);
    
}
