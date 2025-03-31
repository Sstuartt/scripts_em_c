#include <stdio.h>

int main() {
    int numero, i;
    
    // Solicita o número ao usuário
    printf("Digite um número inteiro para ver sua tabuada: ");
    scanf("%d", &numero);
    
    // Exibe o cabeçalho da tabuada
    printf("\nTabuada do %d:\n", numero);
    printf("----------------\n");
    
    // Laço for para calcular e exibir a tabuada
    for (i = 1; i <= 10; i++) {
        printf("%d x %2d = %2d\n", numero, i, numero * i);
    }
    
    return 0;
}
