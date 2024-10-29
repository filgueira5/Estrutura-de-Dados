#include <stdio.h>

int main() {
    printf("Escolha o tamanho do vetor:\n");
    
    int tamanho;
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        printf("Insira o valor no indice %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor criado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            int aux = vetor[i + 1];
            vetor[i + 1] = vetor[i];
            vetor[i] = aux;

            int j = i - 1;
            while (j >= 0) {
                if (aux < vetor[j]) {
                    vetor[j + 1] = vetor[j];
                    vetor[j] = aux;
                } else {
                    break;
                }
                j--;
            }
        }
    }
    
    printf("\nVetor Ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    return 0;
}
