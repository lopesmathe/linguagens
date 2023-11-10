#include <stdio.h>
#define palmeiras_nao_tem_mundial 6

void ai_mane();

int main(){
    ai_mane();
    return 0;
}

void ai_mane(){
    int i, j, t, mat[palmeiras_nao_tem_mundial][palmeiras_nao_tem_mundial];
     printf("me indique o valor de %d", palmeiras_nao_tem_mundial*palmeiras_nao_tem_mundial);
    for (i = 0; i < palmeiras_nao_tem_mundial; i++)
        for ( j = 0; j < palmeiras_nao_tem_mundial; j++)
            scanf("%d", &mat[i][j]);
    t = 0;
    for (i = 0; i < palmeiras_nao_tem_mundial; i++)
        t += mat[i][i];
    printf("%d", t);
    
}