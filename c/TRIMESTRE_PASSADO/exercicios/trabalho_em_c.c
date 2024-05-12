#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funções para simular a leitura dos sensores
int readSensorPrincipal1() {
    return rand() % 2; // Retorna 0 ou 1 aleatoriamente
}

int readSensorPrincipal2() {
    return rand() % 2;
}

int readSensorNormal() {
    return rand() % 2;
}

int readSensorContrario() {
    return rand() % 2;
}

int readBaldeVermelho() {
    return rand() % 2;
}

int readBaldeAzul() {
    return rand() % 2;
}

int readCilindroAgua() {
    return rand() % 2;
}

int main() {
    srand(time(NULL));

    int sensorPrincipal1 = 0;
    int sensorPrincipal2 = 0;
    int sensorNormal = 0;
    int sensorContrario = 0;
    int baldeVermelho = 0;
    int baldeAzul = 0;
    int cilindroAgua = 0;

    while (1) {
        sensorPrincipal1 = readSensorPrincipal1();
        sensorPrincipal2 = readSensorPrincipal2();
        sensorNormal = readSensorNormal();
        sensorContrario = readSensorContrario();
        baldeVermelho = readBaldeVermelho();
        baldeAzul = readBaldeAzul();
        cilindroAgua = readCilindroAgua();

        printf("Dados dos sensores lidos.\n");

        if (sensorPrincipal1 == 0) {
            printf("SensorPrincipal1 e 0.\n");
            if (sensorPrincipal2 == 1) {
                printf("SensorPrincipal2 e 1.\n");
                if (sensorNormal == 1) {
                    printf("SensorNormal e 1.\n");
                    if (sensorPrincipal2 == 1) {
                        printf("SensorPrincipal2 e 1.\n");
                        if (sensorContrario == 1) {
                            printf("SensorContrario e 1.\n");
                            while (baldeVermelho != 1) {
                                printf("Esperando baldeVermelho se tornar 1.\n");
                                baldeVermelho = readBaldeVermelho();
                            }
                        } else {
                            while (baldeAzul != 1) {
                                printf("Esperando baldeAzul se tornar 1.\n");
                                baldeAzul = readBaldeAzul();
                            }
                        }
                    }
                }
            }
        }

        if (cilindroAgua == 0) {
            printf("CilindroAgua e 0.\n");
            printf("A espera que o cilindroAgua torne se 1.\n");
        } else {
            printf("CilindroAgua cheio, loop acabado.\n");
            getchar();
            break;
        }
    }

    return 0;
}