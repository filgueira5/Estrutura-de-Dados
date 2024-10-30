#include <stdio.h> 
                                                                                  
int main() 
{                                                                         
    printf("Escolha o tamanho do vetor:\n");                                         
    
    int tamanho;
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    for (int i = 0; i < tamanho; i++) 
    {
        printf("Insira o valor no indice %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor criado: ");

    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", vetor[i]);
    }

    for(int i = 0; i < tamanho - 1; i++)
    {
        int aux = 0;

        for(int j = 0; j < tamanho - 1; j++)
        {
            if(vetor[j] > vetor[j + 1])
            {
                aux = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");

    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", vetor[i]);
    }
}