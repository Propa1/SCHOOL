#include <stdio.h>

int main(){
    float soma_idades_turma = 0.0;
    float idade;
    int tamanho_da_turma = 0;
    int resp;

    do{
        printf("Digite a idade do aluno: ");
        scanf("%f", &idade);
        getchar();

        soma_idades_turma = soma_idades_turma + idade;
        tamanho_da_turma++;

        printf("Deseja continuar? (1 - sim, 0 - nao) ");
        scanf("%d", &resp);
        getchar();
    } while (resp == 1);
    
    printf("A media da turma e %.2f", soma_idades_turma / tamanho_da_turma);
    getchar();
}