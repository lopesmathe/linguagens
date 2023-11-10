#include <stdio.h>

void Q3();

int main() {
    Q3();
    return 0;
}

void Q3() {
    float vkg, tp, cq;

    const float p = 6;
    const float m = 8;
    const float g = 10;
    const float f = 12;
    const float fq = 0.015;

    printf("\nInforme o valor do KG do queijo utilizado: ");
    scanf("%f", &vkg);
    printf("\nO valor do kg do queijo é %.2f\n", vkg);

    printf("\nInforme o tamanho da pizza:\n");
    printf("1) P\n");
    printf("2) M\n");
    printf("3) G\n");
    printf("4) F\n");
    scanf("%f", &tp);

    if (tp == 1) {
        cq = (vkg * fq) * p;
        printf("O custo do queijo da pizza é %.2f\n", cq);
    } else if (tp == 2) {
        cq = (vkg * fq) * m;
        printf("O custo do queijo da pizza é %.2f\n", cq);
    } else if (tp == 3) {
        cq = (vkg * fq) * g;
        printf("O custo do queijo da pizza é %.2f\n", cq);
    } else if (tp == 4) {
        cq = (vkg * fq) * f;
        printf("O custo do queijo da pizza é %.2f\n", cq);
    } else {
        printf("Opção indisponível, escolha novamente\n");
    }
}
