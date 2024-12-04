#include <stdio.h> 

int main() { 
    int linhas, colunas;
    
    printf("INSIRA O NÚMERO DE LINHAS E COLUNAS RESPECTIVAMENTE: "); 
    scanf("%d %d", &linhas, &colunas);  
    
    // Loop para as linhas
    for(int count_linhas = 1; count_linhas <= linhas; count_linhas++) {
        
        // Loop para imprimir os asteriscos e hífens
        for(int count_char_1 = 1; count_char_1 <= colunas; count_char_1++) {
            printf("*");
            for(int count_char_2 = 1; count_char_2 <= 5; count_char_2++) {
                printf("-");  // Imprime 5 hífens após cada asterisco
            }
        }
        
        printf("\n");  // Nova linha após imprimir os asteriscos e hífens
        
        // Loop para imprimir as barras verticais
        for(int count_char_3 = 1; count_char_3 <= colunas; count_char_3++) {
            printf("|");
            
            // Adiciona espaço após cada barra vertical
            for (int space = 1; space <= 5; space++) {
                printf(" ");
            }
        }
        
        printf("\n");  // Nova linha após imprimir as barras verticais
    } 

    return 0;
}
