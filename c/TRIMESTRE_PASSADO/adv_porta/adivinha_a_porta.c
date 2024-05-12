#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int porta, premio, win = 0, Lost = 0, jogo;
char resp[20], fogo[20], agua[20], planta[20];


void pokecounters(){
    printf("\n\nEscolha o seu pokemon (fogo, agua ou planta): ");
    scanf("%s", &fogo);
    getchar();

    if (strcmp(fogo, "fogo") == 0) {
        printf("\nEscolha o seu oponente (agua ou planta): ");
        scanf("%s", &agua);
        getchar();

        if (strcmp(agua, "agua") == 0) {
            printf("\nNao existe");
            Lost++;
        } else if (strcmp(agua, "planta") == 0) {
            printf("\n Ganhou");
            win++;
        } else {
            printf("\nPokemon nao encontrado");
        }
    } else if (strcmp(fogo, "agua") == 0) {
        printf("\n\nEscolha o seu oponente (fogo ou planta): ");
        scanf("%s", &fogo);
        getchar();

        if (strcmp(fogo, "fogo") == 0) {
            printf("\n Ganhou");
            win++;
        } else if (strcmp(fogo, "planta") == 0) {
            printf("\nNao existe");
            Lost++;
        } else {
            printf("\nPokemon nao encontrado");
        }
    } else if (strcmp(fogo, "planta") == 0) {
        printf("\nEscolha o seu oponente (fogo ou agua): ");
        scanf("%s", &fogo);
        getchar();

        if (strcmp(fogo, "fogo") == 0) {
            printf("\nNao existe");
            Lost++;
        } else if (strcmp(fogo, "agua") == 0) {
            printf("\n Ganhou");
            win++;
        } else {
            printf("\nPokemon nao encontrado");
        }
    } else {
        printf("\nPokemon nao encontrado");
    }

    printf("\n\nWIN: %d\n\n-------------- \nLOST: %d\n\n--------------", win, Lost);

    printf("\n\nDeseja continuar (sim/nao): ");
    scanf("%s", resp);
    getchar();

    if (strcmp(resp, "sim") == 0) {
        pokecounters();
    } else {
        printf("\n\nObrigado por jogar");
    }
}

void premio_1(){
    if (porta == premio) {
        printf("Parabens \n ganhou 1000€");
        win++;
    } else {
        printf("\nNao existe");
        Lost++;
    }
}

void adivinha_a_porta() {
    int Primeira_escolha;

    premio = rand() % 3 + 1;

    printf("%d", premio);

    printf("Escolha uma porta (1, 2 ou 3): ");
    scanf("%d", &porta);
    getchar();

    Primeira_escolha = porta;

    if (porta == premio) {
        printf("Parabens \n ganhou 1000€");
        win++;
    } else {

        if(Primeira_escolha == 1){
            premio = rand() % 2 + 2; 
            printf("%d", premio);

            printf("Escolha a porta 2 ou 3: ");
            scanf("%d", &porta);

            premio_1();
        }else if(Primeira_escolha == 2){
            do
            {
                premio = rand() % 3 + 1; 
                
            } while (premio == 2);
            
            printf("%d", premio);

            printf("Escolha a porta 1 ou 3: ");
            scanf("%d", &porta);

            premio_1();
        }else if(Primeira_escolha == 3){
            premio = rand() % 2 + 1;
            printf("%d", premio);

            printf("Escolha a porta 1 ou 2: ");
            scanf("%d", &porta);

            premio_1();
        }
    }

    printf("\n\nWIN: %d\n\n-------------- \nLOST: %d\n\n--------------", win, Lost);

    printf("\n\nDeseja continuar (sim/nao): ");
    scanf("%s", resp);
    getchar();

    if (strcmp(resp, "sim") == 0) {
        adivinha_a_porta();
    } else {
        printf("\n\nObrigado por jogar");
    }
}

void stop(){
    char alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";
    char letra, resp[20];
    int pontos = 0;

    letra = alfabeto[rand() % 26];

    printf("\n\nA letra é: %c", letra);

    printf("\n Nomes: ");
    scanf("%s", resp);
    
    if (resp[0] == letra) {
        printf("\n\nGanhou");
        pontos += 10;

        printf("\n Paises: ");
        scanf("%s", resp);

        if (resp[0] == letra) {
            printf("\n\nGanhou");
            pontos += 10;

            printf("\n Cores: ");
            scanf("%s", resp);

            if (resp[0] == letra) {
                printf("\n\nGanhou");
                pontos += 10;
                win++;
            } else {
                printf("\n\nNao existe");
                Lost++;
            }
        } else {
            printf("\n\nNao existe");
            Lost++;
        }
    } else {
        printf("\n\nNao existe");

        printf("\n Paises: ");
        scanf("%s", resp);

        if (resp[0] == letra) {
            printf("\n\nGanhou");
            pontos += 10;

            printf("\n Cores: ");
            scanf("%s", resp);

            if (resp[0] == letra) {
                printf("\n\nGanhou");
                pontos += 10;
                win++;
            } else {
                printf("\n\nNao existe");
                Lost++;
            }
        } else {
            printf("\n\nNao existe");
            
            printf("\n Cores: ");
            scanf("%s", resp);

            if (resp[0] == letra) {
                printf("\n\nGanhou");
                pontos += 10;
                printf("\n\nPontos: %d", pontos);
                win++;
            } else {
                printf("\n\nNao existe");
                Lost++;
            }
        }
    }
    
    printf("\n\nPontos: %d", pontos);

    printf("\n\nDeseja Sair (sim/nao): ");
    scanf("%s", resp);

    if (strcmp(resp, "sim") == 0) {
        exit(0);
    } else {
        main();
    }
}

void menu() {
    printf("\nEscolha o jogo (1 - Pokecounters, 2 - Adivinha a porta, 3 - STOP game): ");
    scanf("%d", &jogo);
    getchar();
}

int main() {

    menu();

    switch (jogo) {
        case 1:
            pokecounters();
            break;
        case 2:
            adivinha_a_porta();
            break;
        case 3:
            stop();
            break;
        default:
            printf("Jogo nao encontrado");
            getchar();
    }

    printf("\n\nWIN: %d\n\n-------------- \nLOST: %d\n\n--------------", win, Lost);

    printf("\n\nDeseja Sair (sim/nao): ");
    scanf("%s", resp);

    if (strcmp(resp, "sim") == 0) {
        exit(0);
    } else {
        main();
    }
}