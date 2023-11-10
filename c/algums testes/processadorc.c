#include <stdio.h>

int main() {
    int Intel, Ram;

    printf("Com base nas seguintes opções de modelos, faça sua escolha:\n");
    printf("| Intel5 /// 4GB ou 8GB\n");
    printf("| Intel7 /// 8GB ou 16GB\n");
    printf("| Intel9 /// 16GB ou 32GB\n");

    printf("Informe o modelo do processador (5, 7 ou 9): ");
    scanf("%d", &Intel);

    printf("Informe a quantidade de memória RAM (4, 8, 16 ou 32): ");
    scanf("%d", &Ram);

    if (Intel == 5) {
        if (Ram == 4) {
            printf("O preço do Produto I%d %dGB é igual a R$3.648,00\n", Intel, Ram);
        } else if (Ram == 8) {
            printf("O preço do Produto I%d %dGB é igual a R$4.379,00\n", Intel, Ram);
        } else {
            printf("Opção indisponível, tente novamente\n");
        }
    } else if (Intel == 7) {
        if (Ram == 8) {
            printf("O preço do Produto I%d %dGB é igual a R$5.700,00\n", Intel, Ram);
        } else if (Ram == 16) {
            printf("O preço do Produto I%d %dGB é igual a R$5.999,00\n", Intel, Ram);
        } else {
            printf("Opção indisponível, tente novamente\n");
        }
    } else if (Intel == 9) {
        if (Ram == 16) {
            printf("O preço do Produto I%d %dGB é igual a R$37.498,00\n", Intel, Ram);
        } else if (Ram == 32) {
            printf("O preço do Produto I%d %dGB é igual a R$38.819,00\n", Intel, Ram);
        } else {
            printf("Opção indisponível, tente novamente\n");
        }
    } else {
        printf("Opção indisponível, tente novamente\n");
    }

    return 0;
}
