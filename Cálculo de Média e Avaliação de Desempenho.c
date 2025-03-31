#include <stdio.h>

int main() {
    // Declaração de variáveis
    float nota1, nota2, nota3, media;
    
    // Solicitação das notas ao usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // Cálculo da média aritmética
    media = (nota1 + nota2 + nota3) / 3;
    
    // Exibição da média
    printf("\nMédia do aluno: %.2f\n", media);
    
    // Avaliação do desempenho
    if (media >= 7.0) {
        printf("Situação: Aprovado!\n");
    } 
    else if (media >= 5.0 && media < 7.0) {
        printf("Situação: Recuperação\n");
    } 
    else {
        printf("Situação: Reprovado\n");
    }
    
    return 0;
}
