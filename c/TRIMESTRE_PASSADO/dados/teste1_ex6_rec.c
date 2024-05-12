#include <stdio.h>
#include <stdlib.h>

int main(){
  int dado1, dado2, soma = 0, count = 0;
  
  for(int i = 0; i < 100; i++){
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;

    soma = dado1 + dado2;

    if (soma == 12)
    {
      count++;
    }
  }
  printf("O numero 12 saiu %d vezes", count);
}