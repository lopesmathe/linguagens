#include <stdio.h>

void l4();

int main()
{
    l4();
    return 0;
}

void l4()
{
    int num, num1 = 1;
 printf("manda\n"); 
 scanf("%d", &num);
while (num <= 50)
{
    num++;
    num1 = num + num1;
    printf("%d\n", num1);
}
//  num = 1               1
//  num + 1 = 2           3
//  num1 r 2 + 1 = 3
//  num + 1 = 3
//  num r 3 + 3           6
//  num + 1 = 4
//  num1 = 4 + 6 =10      10


}