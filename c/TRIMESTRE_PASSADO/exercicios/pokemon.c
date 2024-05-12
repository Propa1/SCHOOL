#include <stdio.h>

char trainer1[20], trainer2[20], pokemonNames[3][20] = {"Bulbasaur", "Charmander", "Squirtle"};
char BulbasaurAtaques[3][20] = {"Folha Navalha", "Raio Solar", "Chicote de Vinha"};
char CharmanderAtaques[3][20] = {"Brasa", "Lanca-Chamas", "Garra de Fogo"};
char SquirtleAtaques[3][20] = {"Jato de Agua", "Hidro Bomba", "Surf"};
int escolha1, escolha2, Squirtlevida = 100, Charmandervida = 100, Bulbasaurvida = 100, Squirtleataque = 20, Charmanderataque = 20, Bulbasaurataque = 20;
int verificacao1, verificacao2;

void nomes(){
    printf("Digite o nome do primeiro treinador: ");
    scanf("%s", trainer1);
    printf("Digite o nome do segundo treinador: ");
    scanf("%s", trainer2);
}

void escolha(){
    printf("Escolha um pokemon para lutar %s:\n", trainer1);
    printf("1 - Bulbasaur\n2 - Charmander\n3 - Squirtle\n Escolha:");
    scanf("%d", &escolha1);
    printf("Escolha um pokemon para lutar %s:\n", trainer2);
    printf("1 - Bulbasaur\n2 - Charmander\n3 - Squirtle\n Escolha:");
    scanf("%d", &escolha2);
}

void luta(){
    printf("A batalha comecou!\n");
    if(pokemonNames[escolha1-1] == "Bulbasaur" && pokemonNames[escolha2-1] == "Charmander"){
        do{
            printf("A vida do %s d@ %d\n", trainer1, Bulbasaurvida);
            printf("A vida do %s d@ %d\n", trainer2, Charmandervida);

            printf("Escolha um ataque para o se pokemon %s:\n", trainer1);
            printf("1 - Folha Navalha\n2 - Raio Solar\n3 - Chicote de Vinha\n Escolha:");
            scanf("%d", &Bulbasaurataque);

            printf("Escolha um ataque para o se pokemon %s:\n", trainer2);
            printf("1 - Brasa\n2 - Lanca-Chamas\n3 - Garra de Fogo\n Escolha:");
            scanf("%d", &Charmanderataque);

            verificacao1 = rand() % 2;

            if(verificacao1 == 0){
                printf("O ataque do %s falhou!\n", trainer1);
            }else if(verificacao1 == 1){
                if(Bulbasaurataque == 1){
                    Charmandervida -= 20;
                }else if(Bulbasaurataque == 2){
                    Charmandervida -= 40;
                }else if(Bulbasaurataque == 3){
                    Charmandervida -= 30;
                }
            }

            verificacao2 = rand() % 2;

            if(verificacao2 == 0){
                printf("O ataque do %s falhou!\n", trainer2);
            }else if(verificacao2 == 1){
                if(Charmanderataque == 1){
                    Bulbasaurvida -= 20;
                }else if(Charmanderataque == 2){
                    Bulbasaurvida -= 40;
                }else if(Charmanderataque == 3){
                    Bulbasaurvida -= 30;
                }
            }
        }while(Bulbasaurvida > 0 || Charmandervida > 0);
    }
}

int main(){
    nomes();
    printf("Os treinadores %s e %s estao prontos para a batalha!\n", trainer1, trainer2);
    escolha();
    printf("%s escolheu %s e %s escolheu %s\n", trainer1, pokemonNames[escolha1-1], trainer2, pokemonNames[escolha2-1]);
    luta();
}