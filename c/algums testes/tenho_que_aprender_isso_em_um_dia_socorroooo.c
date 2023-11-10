#include<stdio.h>
#define L 3
#define C 3
void BABUINO();

int main(){
    BABUINO();
    return 0;
}

void BABUINO()
{
    float mat[L][C], v[C], tv = 0;
    int i, j;
    for (i = 0; i < L; i++)
    {
        for ( j = 0; j < C; j++)
        {
            printf("so manda (%d, %d)", i, j);
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
    printf("final %f", tv/(float)C);
    
}