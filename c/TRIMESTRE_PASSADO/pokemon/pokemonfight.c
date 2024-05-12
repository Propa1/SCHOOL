#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pokemon, sex, pokebola, try_catch_pokemon, poke_bola = 20, great_ball = 10, ultra_ball = 5, master_ball = 1;
char wild_pokemon[20][20] = {"Pikachu", "Charmander", "Bulbasaur", "Squirtle", "Jigglypuff", "Meowth", "Psyduck", "Abra", "Snorlax", "Mewtwo"};
char wild_pokemon_type[20][20] = {"Electric", "Fire", "Grass", "Water", "Normal", "Normal", "Water", "Psychic", "Normal", "Psychic"};
char sexo_pokemon[2][20] = {"M", "F"};
char resp, catch_pokemon;
char catched_pokemon[20][20];
int num_catched_pokemon = 0;

void catch(){
    if(pokebola == 1){
        try_catch_pokemon = rand() % 100;
        pokebola--;

        if(try_catch_pokemon < 25){
            printf("Apanhou o pokemon\n");
            strcpy(catched_pokemon[num_catched_pokemon++], wild_pokemon[pokemon]);
        } else {
            printf("O pokemon fugiu\n");
        }

    } else if(pokebola == 2){
        try_catch_pokemon = rand() % 100;
        great_ball--;

        if(try_catch_pokemon < 50){
            printf("Apanhou o pokemon\n");
            strcpy(catched_pokemon[num_catched_pokemon++], wild_pokemon[pokemon]);
        } else {
            printf("O pokemon fugiu\n");
        }

    } else if(pokebola == 3){
        try_catch_pokemon = rand() % 100;
        ultra_ball--;

        if(try_catch_pokemon < 75){
            printf("Apanhou o pokemon\n");
            strcpy(catched_pokemon[num_catched_pokemon++], wild_pokemon[pokemon]);
        } else {
            printf("O pokemon fugiu\n");
        }
    } else if(pokebola == 4){
        try_catch_pokemon = rand() % 100;
        master_ball--;

        if(try_catch_pokemon < 100){
            printf("Apanhou o pokemon\n");
            strcpy(catched_pokemon[num_catched_pokemon++], wild_pokemon[pokemon]);
        } else {
            printf("O pokemon fugiu\n");
        }
    }
}

void explorar_mapa() {
    printf("\nA explorar o mapa\n");

    do{
        printf("A procura de um pokemon...\n");
        pokemon = rand() % 10;
        sex = rand() % 2;
        printf("\n---------------------------\n");
        printf("Encontrou um %s; Tipo: %s; Sexo: %s; \n", wild_pokemon[pokemon], wild_pokemon_type[pokemon], sexo_pokemon[sex]);
        printf("Quer apanhar o pokemon (S/N)?");
        scanf(" %c", &catch_pokemon);
        printf("\n---------------------------\n");

        if(catch_pokemon == 's' || catch_pokemon == 'S') {
    
            printf("\nTem disponivel %d pokebolas, %d great balls, %d ultra balls e %d master balls\n", poke_bola, great_ball, ultra_ball, master_ball);
            printf("Qual pokebola quer usar? (1 - Pokebola, 2 - Great Ball, 3 - Ultra Ball, 4 - Master Ball): ");
            scanf("%d", &pokebola);
            printf("\n---------------------------\n");

            if(poke_bola == 0 && great_ball == 0 && ultra_ball == 0 && master_ball == 0){
                printf("\nNao tem pokebolas disponiveis\n");
                printf("\n---------------------------\n");
                break;
            }else if(poke_bola == 0 && great_ball > 0 && ultra_ball > 0 && master_ball > 0){
                printf("\nNao tem pokebolas disponiveis\n");

                printf("Qual pokebola quer usar? (2 - Great Ball, 3 - Ultra Ball, 4 - Master Ball): ");
                scanf("%d", &pokebola);
                printf("\n---------------------------\n");

                catch();

            }else if(poke_bola > 0 && great_ball == 0 && ultra_ball > 0 && master_ball > 0){
                printf("Nao tem great balls disponiveis\n");

                printf("Qual pokebola quer usar? (1 - Pokebola, 3 - Ultra Ball, 4 - Master Ball): ");
                scanf("%d", &pokebola);
                printf("\n---------------------------\n");


                catch();
            
            }else if(poke_bola > 0 && great_ball > 0 && ultra_ball == 0 && master_ball > 0){
                printf("Nao tem ultra balls disponiveis\n");

                printf("Qual pokebola quer usar? (1 - Pokebola, 2 - Great Ball, 4 - Master Ball): ");
                scanf("%d", &pokebola);
                printf("\n---------------------------\n");

                catch();
            
            }else if(poke_bola > 0 && great_ball > 0 && ultra_ball > 0 && master_ball == 0){
                printf("Nao tem master balls disponiveis\n");

                printf("Qual pokebola quer usar? (1 - Pokebola, 2 - Great Ball, 3 - Ultra Ball): ");
                scanf("%d", &pokebola);
                printf("\n---------------------------\n");

                catch();
            }else{
                catch();
            }
        }

        printf("Tem %d pokemons\n", num_catched_pokemon);
        for(int i = 0; i < num_catched_pokemon; i++){
            printf("%s\n", catched_pokemon[i]);
        }

        printf("Deseja continuar a explorar o mapa? (s/n): ");
        scanf(" %c", &resp);

    }while(resp == 's' || resp == 'S');


    printf("\n---------------------------\n");
    main();
}

int player_pokemon, computer_pokemon, player_pokemon_hp = 100, computer_pokemon_hp = 100, player_pokemon_attack, computer_pokemon_attack;
int count = 0;

void lutar() {
    printf("Vamos lutar\n");
    printf("\n---------------------------\n");

    if(num_catched_pokemon == 0){
        printf("Nao tem pokemons para lutar\n");
        printf("\n---------------------------\n");

        printf("Deseja apanhar um pokemon? (s/n): ");
        scanf(" %c", &resp);

        if(resp == 's' || resp == 'S'){
            explorar_mapa();
        }
    }else{
        printf("Escolha um pokemon para lutar\n");
        for(int i = 0; i < num_catched_pokemon; i++){
            printf("%d - %s\n", i, catched_pokemon[i]);
        }
        printf("Escolha o seu pokemon: ");
        scanf("%d", &player_pokemon);
        printf("\n---------------------------\n");

        computer_pokemon = rand() % 10;
        printf("O computador escolheu o pokemon %s\n", wild_pokemon[computer_pokemon]);
        printf("\n---------------------------\n");

        printf("O seu pokemon e o %s\n", catched_pokemon[player_pokemon]);
        printf("O pokemon do computador e o %s\n", wild_pokemon[computer_pokemon]);
        printf("\n---------------------------\n");

        do{
            count++;
            printf("Round %d\n", count);
            player_pokemon_attack = rand() % 50;
            computer_pokemon_attack = rand() % 50;

            if(player_pokemon_attack > computer_pokemon_attack){
                computer_pokemon_hp -= player_pokemon_attack;
                printf("O seu pokemon atacou o pokemon do computador\n");
                if (computer_pokemon_hp < 0)
                {
                    computer_pokemon_hp = 0;
                }
                printf("O pokemon do computador tem %d de vida\n", computer_pokemon_hp);
                printf("\n---------------------------\n");
            }else if(player_pokemon_attack < computer_pokemon_attack){
                player_pokemon_hp -= computer_pokemon_attack;
                printf("O pokemon do computador atacou o seu pokemon\n");
                if (player_pokemon_hp < 0)
                {
                    player_pokemon_hp = 0;
                }
                printf("O seu pokemon tem %d de vida\n", player_pokemon_hp);
                printf("\n---------------------------\n");
            }else{
                printf("Os pokemons atacaram-se mutuamente\n");
                printf("\n---------------------------\n");
            }

            if(player_pokemon_hp <= 0){
                printf("O seu pokemon perdeu\n");
                printf("\n---------------------------\n");
                break;
            }else if(computer_pokemon_hp <= 0){
                printf("O pokemon do computador perdeu\n");
                printf("\n---------------------------\n");
                break;
            }

        }while(player_pokemon_hp > 0 && computer_pokemon_hp > 0);

        printf("Deseja lutar novamente? (s/n): ");
        scanf(" %c", &resp);

        if(resp == 's' || resp == 'S'){
            player_pokemon_hp = 100;
            computer_pokemon_hp = 100;
            count = 0;
            lutar();
        }else{
            main();
        }
    }
}

int main() {
    int menu_option;
    
    printf("Bem vindo ao mundo pokemon!\n");
    printf("Escolha o que quer fazer (1 - Apanhar pokemon ou 2 - lutar): ");
    scanf("%d", &menu_option);
    printf("\n---------------------------\n");

    switch (menu_option) {
        case 1:
            printf("\nVamos explorar o mapa\n");
            printf("\n---------------------------\n");
            explorar_mapa();
            break;
        case 2:
            printf("\nVamos lutar contra o computador\n");
            printf("\n---------------------------\n");
            lutar();
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

}
    