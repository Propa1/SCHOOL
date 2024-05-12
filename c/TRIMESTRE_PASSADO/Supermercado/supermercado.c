#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAMANHO_FILA 10
#define PROBABILIDADE_CLIENTE_SIMPLES 50
#define PROBABILIDADE_CLIENTE_ESPECIAL 25
#define PROBABILIDADE_DESISTENCIA 30
#define CICLOS_PARA_SORT_CLIENTE_SIMPLES 5
#define CICLOS_PARA_SORT_CLIENTE_ESPECIAL 5
#define CICLOS_PARA_SORT_DESISTENCIA 5

typedef struct {
    int id;
    char tipo;
    int tempoEspera;
    int tempoServico;
} Pessoa;

typedef struct {
    Pessoa fila[MAX_TAMANHO_FILA];
    int frente;
    int tras;
    int contagem;
} Fila;

void inicializarFila(Fila* q) {
    q->frente = 0;
    q->tras = -1;
    q->contagem = 0;
}

int estaFilaVazia(Fila* q) {
    return q->contagem == 0;
}

int estaFilaCheia(Fila* q) {
    return q->contagem == MAX_TAMANHO_FILA;
}

void enfileirar(Fila* q, Pessoa p) {
    if (estaFilaCheia(q)) {
        printf("A fila esta cheia. Nao pode entrar mais ninguem.\n");
        return;
    }
    q->tras = (q->tras + 1) % MAX_TAMANHO_FILA;
    q->fila[q->tras] = p;
    q->contagem++;
}

Pessoa desenfileirar(Fila* q) {
    if (estaFilaVazia(q)) {
        printf("A fila esta vazia\n");
        return;
    }
    Pessoa p = q->fila[q->frente];
    q->frente = (q->frente + 1) % MAX_TAMANHO_FILA;
    q->contagem--;
    return p;
}

void imprimirFila(Fila* q) {
    if (estaFilaVazia(q)) {
        printf("A fila esta vazia.\n");
        return;
    }
    printf("Conteudo da fila:\n");
    int i = q->frente;
    int contagem = 0;
    while (contagem < q->contagem) {
        printf("Pessoa %d: Tipo: %c, Tempo de Espera: %d, Tempo de Servico: %d\n", q->fila[i].id, q->fila[i].tipo, q->fila[i].tempoEspera, q->fila[i].tempoServico);
        i = (i + 1) % MAX_TAMANHO_FILA;
        contagem++;
    }
}

int main() {
    Fila fila;
    inicializarFila(&fila);

    srand(time(NULL));

    int tempo = 0;
    int ciclos = 0;

    while (1) {
        tempo++;

        // Verificar se há clientes a ser atendidos
        if (estaFilaVazia(&fila)) {
            printf("Nenhum cliente na fila.\n");
        } else {
            Pessoa p = desenfileirar(&fila);
            printf("A atender o cliente %d. Tipo: %c, Tempo de Espera: %d, Tempo de Servico: %d\n", p.id, p.tipo, p.tempoEspera, p.tempoServico);
        }

        // Imprimir conteúdo da fila
        imprimirFila(&fila);

        // Criar um cliente simples
        if (ciclos % CICLOS_PARA_SORT_CLIENTE_SIMPLES == 0) {
            int probabilidade = rand() % 100;
            if (probabilidade < PROBABILIDADE_CLIENTE_SIMPLES) {
                Pessoa p;
                p.id = tempo;
                p.tipo = 'S';
                p.tempoEspera = 0;
                p.tempoServico = rand() % 5 + 1;
                enfileirar(&fila, p);
                printf("Novo cliente simples adicionado a fila.\n");
            }
        }

        // Criar um cliente especial
        if (ciclos % CICLOS_PARA_SORT_CLIENTE_ESPECIAL == 0) {
            int probabilidade = rand() % 100;
            if (probabilidade < PROBABILIDADE_CLIENTE_ESPECIAL) {
                Pessoa p;
                p.id = tempo;
                p.tipo = 'E';
                p.tempoEspera = 0;
                p.tempoServico = rand() % 5 + 1;
                enfileirar(&fila, p);
                printf("Novo cliente especial adicionado a fila.\n");
            }
        }

        // Verificar se alguem desistiu da fila
        if (ciclos % CICLOS_PARA_SORT_DESISTENCIA == 0 && fila.contagem > 5) {
            int probabilidade = rand() % 100;
            if (probabilidade < PROBABILIDADE_DESISTENCIA) {
                Pessoa p = desenfileirar(&fila);
                printf("O cliente %d desistiu da fila.\n", p.id);
            }
        }

        // Incrementar tempo de espera para clientes na fila
        if (!estaFilaVazia(&fila)) {
            int i = fila.frente;
            int contagem = 0;
            while (contagem < fila.contagem) {
                fila.fila[i].tempoEspera++;
                i = (i + 1) % MAX_TAMANHO_FILA;
                contagem++;
            }
        }

        // Verificar se é hora da pausa
        if (ciclos % 5 == 0) {
            printf("Pressione enter para continuar...\n");
            getchar();
            printf("*****\n");
        }

        ciclos++;
    }

    return 0;
}