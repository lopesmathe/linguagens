#include <stdio.h>
#define L 3
#define C 3

void maluco_beleza();

int main()
{
    maluco_beleza();
    return 0;
}

void maluco_beleza(){
    float mat[L][C], v[C], tv;
    int i, j;
    for (i = 0; i < L; i++)
    {
        for ( j = 0; j < C; j++)
        {
            printf("me informe a cedula de (%d, %d)", i, j);
            scanf("%f", &mat[i][j]);
        }
        
    }
    for (j = 0; j < C; j++)
    {
        v[j] = 0;
        for (i = 0; i < L; i++)
            v[j] += mat[i][j];
        printf("%f", v[j]);
        tv += v[j];
    }
    printf("o resu he %f", tv/(float)C);
}