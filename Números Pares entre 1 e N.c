#include <stdio.h>

int main() {
    int N, i;
    
    // Solicita ao usuário um número inteiro positivo
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);
    
    // Verifica se o número é positivo
    if (N <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Encerra o programa com código de erro
    }
    
    printf("Números pares entre 1 e %d:\n", N);
    
    // Laço for para percorrer os números de 1 até N
    for (i = 1; i <= N; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n"); // Pula uma linha no final
    
    return 0;
}
