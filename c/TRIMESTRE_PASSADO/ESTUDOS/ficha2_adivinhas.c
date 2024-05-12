#include <stdio.h>

int meu_num;
int num_usuario;
int tentativas = 0;

int main() {

    printf("Insere o numero para o utilizador adivinhar (0 a 20): ");
    scanf("%d", &meu_num);
    getchar();

    printf("\n");
    printf("Agora e a tua vez de adivinhar o numero\n");

    do {
        
        printf("\n");
        printf("Qual e o numero? ");
        printf("\n");
        scanf("%d", &num_usuario);
        getchar();

        if (num_usuario > meu_num) {
            printf("O numero que estou a pensar e menor\n");
        } else if (num_usuario < meu_num) {
            printf("O numero que estou a pensar e maior\n");
        }

        tentativas++;

    } while (num_usuario != meu_num);

    printf("\n");
    printf("Acertaste em %d tentativas", tentativas);

    printf("\n");
    printf("\nPress any key to exit...");
    getchar();

    return 0;
}