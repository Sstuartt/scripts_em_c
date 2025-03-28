#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // Solicita os números e a operação ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);  // Note o espaço antes do %c para consumir possíveis whitespaces

    // Realiza a operação correspondente
    if (operacao == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
    } 
    else if (operacao == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
    } 
    else if (operacao == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
    } 
    else if (operacao == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
        } else {
            printf("Erro: Divisão por zero!\n");
        }
    } 
    else {
        printf("Operação inválida!\n");
    }

    return 0;
}
