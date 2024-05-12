#include <stdio.h>

int dado1, dado2, soma, count = 0;

int main(){
    for(int i = 0; i < 100; i++){
        
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;

        soma = dado1 + dado2;
        
        if(soma == 12){
            count++;
        }
    }

    printf("O numero de vezes que a soma dos dados foi 12 e: %d\n", count);
    getchar();
}