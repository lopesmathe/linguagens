#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mat_sem_rand();
void mat_com_rand();

int main()
{
    srand(time(NULL));
    int escolha;
    printf("escolha qual codigo\n");
    printf("1: matriz sem rand\n");
    printf("2: matriz com rand\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1: mat_sem_rand(); break;
    case 2: mat_com_rand(); break;
    default: printf("nao"); break;
    return 0;
    }

}

void mat_sem_rand(){
    int mat[3][3], a, z;
    printf("manda");
    for (a = 0; a < 3; a++)
    {
        for (z = 0; z < 3; z++)
        {
            scanf("%d", &mat[a][z]);
        }
    }

    for (a = 0; a < 3; a++)
    {
        for (z = 0; z < 3; z++)
        {
            printf("%3d", mat[a][z]);
        }
        printf("\n");
    }
    
}

void mat_com_rand(){
printf("manda\n");
long long int mat[100][100], a, z;
for ( a = 0; a < 100; a++)
{
    for (z = 0; z < 100; z++)
    {
        mat[a][z] = rand() % 100;
        printf("%3lld", mat[a][z]);
    }
    printf("\n");
}

}