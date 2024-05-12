#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    getchar();

    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    getchar();

    if (num1 > num2) {
        printf("O primeiro numero e maior que o segundo");
    } else if (num1 < num2) {
        printf("O segundo numero e maior que o primeiro");
    } else {
        printf("Os numeros sao iguais");
    }

    printf("\nPress any key to exit...");
    getchar();

    return 0;
}