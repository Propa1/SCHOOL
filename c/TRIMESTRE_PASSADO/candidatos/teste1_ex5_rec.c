#include <stdio.h>
#include <stdlib.h>
char letraLida, c;
int valorA=0, valorB=0, valorC = 0;
int main(){
  do{
    printf("Digite A para candidato 1, B para candidato 2, C para candidato 3");
    printf ("\nDigite  F para terminar: ");
    scanf(" %c", &letraLida);   

    if ((letraLida != 'A') && (letraLida != 'B') && (letraLida != 'C') && (letraLida != 'F')){
      printf("Codigo  invalido\n"); 
      break;
    }else{
      if (letraLida == 'A'){
        valorA = valorA + 1;
      }else if (letraLida == 'B') {
        valorB = valorB + 1;
      }else if (letraLida == 'C') {
        valorC = valorC + 1;
      }
    }
  }while (letraLida != 'F');
}

// o erro de sintaxe ocorre da linha 11 no qual temos que trocar || por && para que o programa funcione corretamente
// o outro erro ocorre na linha 23 no qual temos que trocar o == por != para que o programa funcione em loop