#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

int main() {
    float numero1, numero2, resultado;

    // Solicita entrada do usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    // Chama a função somar e armazena o resultado
    resultado = somar(numero1, numero2);

    // Exibe o resultado
    printf("A soma de %.2f + %.2f é: %.2f\n", numero1, numero2, resultado);

    return 0;
}
