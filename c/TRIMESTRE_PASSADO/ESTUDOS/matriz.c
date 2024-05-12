#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz[3][3] = {{4 , 5 , 1}, {2 , 3 , 1}, {1 , 1 , 1}};

char letra(){
  int numero = rand() % 26;

  char letra = 'a' + numero;

  return letra;
}

int main(){

  srand(time(NULL));

  for(int i = 0; i < 3 ; i++){
    for(int j = 0; j < 3 ; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("--------------------------------------------------------\n");

  for (int i = 0; i < 10; i++){
    printf("%c ", letra());
  }
  
}