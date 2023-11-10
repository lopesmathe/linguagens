#include <stdio.h>
#define L 6
#define C 9
#define ORDEM 5

void diagonalPrincipal();

int main()
{
	diagonalPrincipal();
	return 0;
}

void diagonalPrincipal()
{
    int mat[ORDEM][ORDEM], i, j, t;
    printf("me infome %d", ORDEM*ORDEM);
    for (i = 0; i < ORDEM; i++)
        for (j = 0; j < ORDEM; j++)
            scanf("%d", &mat[i][j]);
    t = 0;
    for (i = 0; i < ORDEM; i++)
        t += mat[i][i];
        printf("%d", t);
    

    
}