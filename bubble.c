#include <stdio.h>

int main() {
    printf("Insira um tamanho para o vetor: ");

    int tamanho;
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int count = 0; count < tamanho; count++) {
        printf("Insira o valor no indice %d: ", count);
        scanf("%d", &vetor[count]);
    }

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (int count = 0; count < tamanho; count++) {
        printf("%d ", vetor[count]);
    }
    printf("\n");

    return 0;
}
