#include <stdio.h>

int idade;

int main() {
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    getchar();

    if ((2024 - idade) < 1974) {
        printf("Nasceste antes da revolução dos cravos!\n");
    } else {
        printf("Ainda es uma criança");
    }

    printf("\nPress any key to exit...");
    getchar();

    return 0;
}