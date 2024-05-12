#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char umNome[60];

char letra(){
  int numero = rand() % 26;

  char letra = 'A' + numero;

  return letra;
}

int main(){
  for (int i = 0; i < 60; i++)
  {
    if (i == 30){
      umNome[i] = ' ';
    }else{
      umNome[i] = letra();
    }
  }
  printf("%s\n", umNome);  

  //nome de tras para a frente

  for(int i = 60; i >= 0; i--){
    printf("%c", umNome[i]);
  }
}