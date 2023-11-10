#include <stdio.h>

// Protótipo da função para listar números primos.
void printPrimes(int n);

int main() {
    int n;

    // Solicita ao usuário para inserir um número inteiro positivo.
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Chama a função printPrimes com o número inserido pelo usuário.
    printPrimes(n);

    return 0;  // Indica que o programa foi concluído com sucesso.
}

void printPrimes(int n) {
    // Exibe uma mensagem indicando o intervalo de números primos.
    printf("Numeros primos entre 0 e %d:\n", n);

    // Loop que percorre os números de 2 até n.
    for (int i = 2; i <= n; i++) {
        int isPrime = 1;  // Variável para verificar se i é primo (inicialmente assumimos que é).

        // Loop que verifica se i é divisível por algum número de 2 até a raiz quadrada de i.
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Se i for divisível por algum número, não é primo.
                break;  // Sai do loop interno.
            }
        }

        // Se isPrime ainda for 1, i é primo, então o exibe.
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");  // Imprime uma nova linha após listar os números primos.
}
