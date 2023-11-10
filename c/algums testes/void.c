#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sem_rand();
void com_rand();
void mat_mais();
void mat_transposta();
void mat_para_vet();
int main(){
    srand(time(NULL));
    int escolha;

    printf("escolha o seu codigo com ou sem rand\n");
    printf("opçao 1, sem rand\n");
    printf("opçao 2, com rand\n");
    printf("opçao 3, soma de mat\n");
    printf("opçao 4, mat_para_vet\n");
    printf("opçao 5, mat transposta\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1: sem_rand(); break;
    case 2: com_rand(); break;
    case 3: mat_mais(); break;
    case 4: mat_para_vet(); break;
    case 5: mat_transposta(); break;
    default: printf("nao\n"); break;
    }
    return 0;
}

int soma;

void sem_rand(){
    int mat[3][3], a, z;
    printf("manda\n");
    for (a = 0; a < 3; a++)
    {
        for (z = 0; z < 3; z++)
        {
            scanf("%d", &mat[a][z]);
        }
        
    }

    for ( a = 0; a < 3; a++)
    {
        for ( z = 0; z < 3; z++)
        {
            printf("%3d", mat[a][z]);
        }
        printf("\n");
    }
}

void com_rand(){
    int mat[3][3], a, z;
    printf("manda\n");
    for ( a = 0; a < 3; a++)
    {
        for ( z = 0; z < 3; z++)
        {
            mat[a][z] = rand() % 100;
            printf("%3d", mat[a][z]);
        }
        printf("\n");
    }
    
}

void mat_mais(){
    int mat1[3][3], mat2[3][3], resu[3][3];
    int a, z;
    printf("manda");
    for (a = 0; a < 3; a++)
    {
        for ( z = 0; z < 3; z++)
        {
            scanf("%d", &mat1[a][z]);
        }
    }
    printf("manda");
    for ( a = 0; a < 3; a++)
    {
        for (z = 0; z < 3; z++)
        {
            scanf("%3d", &mat2[a][z]);
        }
        
    }
    printf("a");
    for ( a = 0; a < 3; a++)
    {
        for ( z = 0; z < 3; z++)
        {
            resu[a][z] = mat1[a][z] + mat2[a][z];
            printf("%3d", resu[a][z]);
        }
        
    }
    
    
    }
void mat_transposta(){
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
            printf("%3d", mat[z][a]);
        }
        printf("\n");
    }
    
} 

void mat_para_vet(){
    int mat[3][3], a, z;
    printf("manda");
    for (a = 0; a < 3; a++)
    {
        for (z = 0; z < 3; z++)
        {
            scanf("%3d", mat[a][z]);
        }
    }

    for (a = 0; a < 3; a++)
    {
        for (z = 0; z < 3; z++)
        {
            printf("%d", mat[a][z]);
        }
    }
    
}