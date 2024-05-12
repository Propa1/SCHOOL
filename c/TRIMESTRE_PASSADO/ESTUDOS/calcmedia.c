#include <stdio.h>
#include <stdlib.h>

int soma = 0, n;
double media;
double allgrades[25][2];

void calcmedia(double allgrades[25][2], int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      soma += allgrades[i][j];
    }
  }
  media = soma / (n*2);
  printf("A média das notas é: %.2lf\n", media);
}

int main(){
  printf("Digite o número de alunos: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite a nota %d do aluno %d: ", j+1, i+1);
      scanf("%lf", &allgrades[i][j]);
    }
  }

  calcmedia(allgrades, n);
}