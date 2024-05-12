#include <stdio.h>

int contador = 0;
int nota[100];

int main(){
    printf("Quantos alunos exitem na turma? ");
    scanf("%d", &contador);

    int i;

    for (int i = 1; i <= contador; i++) {

        printf("Qual e a nota do teste 1 do aluno %d? ", i);
        scanf("%d", &nota[i]);
        getchar(); 
    }

    //media

    int soma = 0;

    for (int i = 1; i <= contador ; i++) {
        soma = soma + nota[i];
    }

    int media = soma / contador;

    printf("A media da turma e %d", media);

    printf("\nPress any key to exit...");
    getchar();

    return 0;
}