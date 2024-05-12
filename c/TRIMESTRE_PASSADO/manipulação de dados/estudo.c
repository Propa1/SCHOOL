#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

void imprimir_no_txt(char *nome_arquivo, char *texto){
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "a");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    fprintf(arquivo, "%s\n", texto);
    fclose(arquivo);
}

void ler_arquivo(char *nome_arquivo){
    FILE *arquivo;
    char texto[100];
    arquivo = fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    while(fgets(texto, 100, arquivo) != NULL){
        printf("%s", texto);
    }
    fclose(arquivo);
}

void usedcodes(){
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Codigo usado para transformar o nome em Caps Lock: ");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < strlen(nome); i++){");
    imprimir_no_txt("estudo.txt", "    nomeCaps[i] = toupper(nome[i]);");
    imprimir_no_txt("estudo.txt", "    printf(\"%c\", nomeCaps[i]);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "nomeCaps[strlen(nome)] = '\\0';");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "strcat(nome, \"ABC\"); *Adiciona ABC ha frente do nome*");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "nome[strlen(nome)-3] = '\\0'; *Tira os 3 ultimos caracteres do nome*");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Inversão da string: ");
    imprimir_no_txt("estudo.txt", "for(int i = strlen(nome)-1; i >= 0; i--){");
    imprimir_no_txt("estudo.txt", "    printf(\"%c\", nome[i]);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "strcpy(nomeCaps, nome); *Copia procedimento de uma string para outra*");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Matriz: ");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < 3; i++){");
    imprimir_no_txt("estudo.txt", "    for(int j = 0; j < 3; j++){");
    imprimir_no_txt("estudo.txt", "        printf(\"%d \", matriz[i][j]);");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "    printf(\"\\n\");");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Matriz transposta: ");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < 3; i++){");
    imprimir_no_txt("estudo.txt", "    for(int j = 0; j < 3; j++){");
    imprimir_no_txt("estudo.txt", "        printf(\"%d \", matriz[j][i]);");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "    printf(\"\\n\");");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Inserir dados na matriz: ");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < 3; i++){");
    imprimir_no_txt("estudo.txt", "    for(int j = 0; j < 3; j++){");
    imprimir_no_txt("estudo.txt", "        printf(\"Digite um numero: \");");
    imprimir_no_txt("estudo.txt", "        scanf(\"%d\", &matriz[i][j]);");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Remover dados da matriz: ");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < 3; i++){");
    imprimir_no_txt("estudo.txt", "    for(int j = 0; j < 3; j++){");
    imprimir_no_txt("estudo.txt", "        matriz[i][j] = 0;");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Array de inteiros: ");
    imprimir_no_txt("estudo.txt", "int array[5] = {1, 2, 3, 4, 5};");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < 5; i++){");
    imprimir_no_txt("estudo.txt", "    printf(\"%d \", array[i]);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Array de inteiros invertido: ");
    imprimir_no_txt("estudo.txt", "for(int i = 4; i >= 0; i--){");
    imprimir_no_txt("estudo.txt", "    printf(\"%d \", array[i]);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Remover dados dos arrays: ");
    imprimir_no_txt("estudo.txt", "for(int i = 0; i < 5; i++){");
    imprimir_no_txt("estudo.txt", "    array[i] = 0;");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Todas as funções para manipulação de strings: ");
    imprimir_no_txt("estudo.txt", "Todas as funções para manipulação de strings: ");
    imprimir_no_txt("estudo.txt", "1. strcpy - Copia uma string para outra");
    imprimir_no_txt("estudo.txt", "2. strcat - concatena duas strings");
    imprimir_no_txt("estudo.txt", "3. strlen - Retorna o tamanho de uma string");
    imprimir_no_txt("estudo.txt", "4. strcmp - Compara duas strings");
    imprimir_no_txt("estudo.txt", "5. strchr - Encontra a primeira ocorrência de um caractere em uma string");
    imprimir_no_txt("estudo.txt", "6. strstr - Encontra a primeira ocorrência de uma string em outra string");
    imprimir_no_txt("estudo.txt", "7. sprintf - Escreve uma string formatada em uma variável de saída");
    imprimir_no_txt("estudo.txt", "8. sscanf - Lê uma string formatada de uma variável de entrada");
    imprimir_no_txt("estudo.txt", "9. toupper - Converte letras minúsculas em maiúsculas");
    imprimir_no_txt("estudo.txt", "10. tolower - Converte letras maiúsculas em minúsculas");
    imprimir_no_txt("estudo.txt", "11. isalpha - Verifica se um caractere é uma letra do alfabeto");
    imprimir_no_txt("estudo.txt", "12. isdigit - verifica se um caractere é um dígito");
    imprimir_no_txt("estudo.txt", "13. isalnum - Verifica se um caractere é alfanumérico");
    imprimir_no_txt("estudo.txt", "14. isspace - Verifica se um caractere é um espaço em branco");
    imprimir_no_txt("estudo.txt", "15. isupper - Verifica se um caractere é uma letra maiúscula");
    imprimir_no_txt("estudo.txt", "16. islower - Verifica se um caractere é uma letra minúscula");
    imprimir_no_txt("estudo.txt", "--------------------------------------"); 
    imprimir_no_txt("estudo.txt", "Todas as operações para manipulação de matrizes: ");
    imprimir_no_txt("estudo.txt", "1. Criação de uma matriz EX: int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};");
    imprimir_no_txt("estudo.txt", "2. Acesso a elementos de uma matriz EX: matriz[0][0] = 10;");
    imprimir_no_txt("estudo.txt", "3. Modificação de elementos de uma matriz EX: matriz[0][0] = 10;");
    imprimir_no_txt("estudo.txt", "4. Percorrer uma matriz (usando loops aninhados)");
    imprimir_no_txt("estudo.txt", "5. Adição de matrizes");
    imprimir_no_txt("estudo.txt", "6. Multiplicação de matrizes");
    imprimir_no_txt("estudo.txt", "7. Transposição de uma matriz");
    imprimir_no_txt("estudo.txt", "8. Inversão de uma matriz");
    imprimir_no_txt("estudo.txt", "9. Remoção de elementos de uma matriz");
    imprimir_no_txt("estudo.txt", "---------------------------------------");
    imprimir_no_txt("estudo.txt", "Todas as operações para manipulação de arrays: ");
    imprimir_no_txt("estudo.txt", "1. Criação de um array EX: int array[5] = {1, 2, 3, 4, 5};");
    imprimir_no_txt("estudo.txt", "2. Acesso a elementos de um array EX: array[0] = 10;");
    imprimir_no_txt("estudo.txt", "3. Modificação de elementos de um array EX: array[0] = 10;");
    imprimir_no_txt("estudo.txt", "4. Percorrer um array (usando loop) EX: for(int i = 0; i < 5; i++){ printf(\"%d \", array[i]); }");
    imprimir_no_txt("estudo.txt", "5. Ordenação de um array (usando algoritmos de ordenação como bubble sort, quick sort, etc.)");
    imprimir_no_txt("estudo.txt", "6. Pesquisa em um array (usando algoritmos de pesquisa como pesquisa linear, pesquisa binária, etc.)");
    imprimir_no_txt("estudo.txt", "7. Inserção de elementos em um array (usando algoritmos de inserção como inserção no início, inserção no final, etc.)");
    imprimir_no_txt("estudo.txt", "8. Remoção de elementos de um array (usando algoritmos de remoção como remoção no início, remoção no final, etc.)");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Todas as operações para manipulação de arquivos: ");
    imprimir_no_txt("estudo.txt", "1. Abertura de um arquivo (usando fopen)");
    imprimir_no_txt("estudo.txt", "2. Leitura de um arquivo (usando fgets)");
    imprimir_no_txt("estudo.txt", "3. Escrita em um arquivo (usando fprintf)");
    imprimir_no_txt("estudo.txt", "4. Fechamento de um arquivo (usando fclose)");
    imprimir_no_txt("estudo.txt", "5. Verificação de erros ao abrir um arquivo (usando fopen)");
    imprimir_no_txt("estudo.txt", "6. Verificação de erros ao ler um arquivo (usando fgets)");
    imprimir_no_txt("estudo.txt", "7. Verificação de erros ao escrever em um arquivo (usando fprintf)");
    imprimir_no_txt("estudo.txt", "8. Verificação de erros ao fechar um arquivo (usando fclose)");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "iMPRIMIR NO TXT: ");
    imprimir_no_txt("estudo.txt", "void imprimir_no_txt(char *nome_arquivo, char *texto){");
    imprimir_no_txt("estudo.txt", "    FILE *arquivo;");
    imprimir_no_txt("estudo.txt", "    arquivo = fopen(nome_arquivo, \"a\");");
    imprimir_no_txt("estudo.txt", "    if(arquivo == NULL){");
    imprimir_no_txt("estudo.txt", "        printf(\"Erro ao abrir o arquivo\\n\");");
    imprimir_no_txt("estudo.txt", "        exit(1);");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "    fprintf(arquivo, \"%s\\n\", texto);");
    imprimir_no_txt("estudo.txt", "    fclose(arquivo);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "LER ARQUIVO: ");
    imprimir_no_txt("estudo.txt", "void ler_arquivo(char *nome_arquivo){");
    imprimir_no_txt("estudo.txt", "    FILE *arquivo;");
    imprimir_no_txt("estudo.txt", "    char texto[100];");
    imprimir_no_txt("estudo.txt", "    arquivo = fopen(nome_arquivo, \"r\");");
    imprimir_no_txt("estudo.txt", "    if(arquivo == NULL){");
    imprimir_no_txt("estudo.txt", "        printf(\"Erro ao abrir o arquivo\\n\");");
    imprimir_no_txt("estudo.txt", "        exit(1);");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "    while(fgets(texto, 100, arquivo) != NULL){");
    imprimir_no_txt("estudo.txt", "        printf(\"%s\", texto);");
    imprimir_no_txt("estudo.txt", "    }");
    imprimir_no_txt("estudo.txt", "    fclose(arquivo);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Struct: ");
    imprimir_no_txt("estudo.txt", "struct Pessoa{");
    imprimir_no_txt("estudo.txt", "    char nome[100];");
    imprimir_no_txt("estudo.txt", "    int idade;");
    imprimir_no_txt("estudo.txt", "};");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Função para imprimir struct: ");
    imprimir_no_txt("estudo.txt", "void imprimir_pessoa(struct Pessoa p){");
    imprimir_no_txt("estudo.txt", "    printf(\"Nome: %s\\n\", p.nome);");
    imprimir_no_txt("estudo.txt", "    printf(\"Idade: %d\\n\", p.idade);");
    imprimir_no_txt("estudo.txt", "}");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Manipular a struct: ");
    imprimir_no_txt("estudo.txt", "struct Pessoa p1;");
    imprimir_no_txt("estudo.txt", "strcpy(p1.nome, \"João\");");
    imprimir_no_txt("estudo.txt", "p1.idade = 20;");
    imprimir_no_txt("estudo.txt", "imprimir_pessoa(p1);");
    imprimir_no_txt("estudo.txt", "--------------------------------------");
}

int main(){
    char nome[100], nomeCaps[100];
    printf("Digite um nome: ");
    gets(nome);

    printf("Nome digitado: %s\n", nome);
    printf("Nome em Caps Lock: ");
    for(int i = 0; i < strlen(nome); i++){
        nomeCaps[i] = toupper(nome[i]);
        printf("%c", nomeCaps[i]);
    }
    nomeCaps[strlen(nome)] = '\0';

    printf("\nVai adicionar ABC ha frente do nome: ");
    strcat(nome, "ABC");
    printf("%s\n", nome);

    printf("\nVai tirar os 3 ultimos caracteres do nome: ");
    nome[strlen(nome)-3] = '\0';
    printf("%s\n", nome);

    printf("\nInversao da string: ");
    for(int i = strlen(nome)-1; i >= 0; i--){
        printf("%c", nome[i]);
    }
    printf("\n");

    printf("\nCopiar procedimento de uma string para outra: ");
    strcpy(nomeCaps, nome);
    printf("%s\n", nomeCaps);

    imprimir_no_txt("estudo.txt", "Nome: ");
    imprimir_no_txt("estudo.txt", nome);
    imprimir_no_txt("estudo.txt", "--------------------------------------");
    imprimir_no_txt("estudo.txt", "Nome em Caps Lock: ");
    imprimir_no_txt("estudo.txt", nomeCaps);

    //Matriz

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("\nMatriz: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    printf("Inserir dados na matriz: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("remover dados da matriz: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Array de inteiros: ");
    int array[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    printf("\nArray de inteiros invertido: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", array[i]);
    }

    printf("Remover dados dos arrays: ");
    for(int i = 0; i < 5; i++){
        array[i] = 0;
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    usedcodes();
    printf("\n--------------------------------------\n");
    printf("Texto impresso no arquivo com sucesso!\n");
    printf("--------------------------------------\n");

    ler_arquivo("estudo.txt");

    return 0;
}