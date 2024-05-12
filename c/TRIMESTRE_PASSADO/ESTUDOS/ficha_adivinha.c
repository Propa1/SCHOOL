#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int porta, premio, win = 0, Lost = 0;
char resp[20];

void premio_1(){
    if (porta == premio) {
        printf("Parabens \n ganhou 1000 EUR");
        win++;
    } else {
        printf("\nPerdeu \n");
        Lost++;
    }
}

void adivinha_a_porta() {
    int Primeira_escolha;

    for(int i = 0; i < 100; i++){
        porta = rand() % 3 + 1;

        printf("Escolha uma porta (1, 2 ou 3): %d", porta);

        premio = rand() % 3 + 1;
        Primeira_escolha = porta;

        if (porta == premio) {
            printf("Parabens \n ganhou 1000 EUR");
            win++;
        } else {

            printf("\nA primeira porta estava errada, tente novamente");

            if(Primeira_escolha == 1){
                premio = rand() % 2 + 2; 
                porta = rand() % 2 + 2;

                printf("\nEscolha entre a porta 2 ou 3: %d", porta);
                premio_1();
            }else if(Primeira_escolha == 2){
                do
                {
                    premio = rand() % 3 + 1; 
                } while (premio == 2);
                do
                {
                    porta = rand() % 3 + 1;
                } while (porta == 2);
                
                printf("\nEscolha entre a porta 1 ou 3: %d", porta);
                premio_1();
            }else if(Primeira_escolha == 3){
                premio = rand() % 2 + 1;
                porta = rand() % 2 + 1;

                printf("\nEscolha entre a porta 1 ou 2: %d", porta);
                premio_1();
            }
        }

        printf("\n\nWIN: %d\n\n-------------- \nLOST: %d\n\n--------------", win, Lost);
    }
}

int main() {

    adivinha_a_porta();

    printf("\n\nDeseja Sair (sim/nao): ");
    scanf("%s", resp);

    if (strcmp(resp, "sim") == 0 || strcmp(resp, "Sim") == 0 || strcmp(resp, "SIM") == 0 || strcmp(resp, "s") == 0 || strcmp(resp, "S") == 0){
        exit(0);
    } else {
        main();
    }
}