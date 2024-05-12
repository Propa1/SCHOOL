#include <stdio.h>
#include <stdbool.h>

int SP, SN, SC;
int VA = 0;
int VE = 0;
int CP = 0;
int estado = 0;

int main() {
    while(true) {
        printf("\n\nEstado atual: E%d", estado);
        printf("\nSaidas: VA = %d; VE = %d; CP = %d", VA, VE, CP);
        printf("\nINTRODUZA AS ENTRADAS (1 ou 0)\n");
        printf("SP: ");
        scanf("%d", &SP);
        printf("SN: ");
        scanf("%d", &SN);
        printf("SC: ");
        scanf("%d", &SC);
        
        switch (estado) {
            case 0:
                if (SP == 1){
                    if (SN == 1) {
                        estado = 3;
                        CP = 1;
                    } else if (SC == 0) {
                        estado = 1;
                        VA = 1;
                    } else {
                        estado = 2;
                        VE = 1;
                    }
                }
                break;
            case 1:
                if (SN == 1){
                    estado = 3;
                    VA = 0;
                    CP = 1;
                }
                break;
            case 2:
                if (SN == 1){
                    estado = 3;
                    VE = 0;
                    CP = 1;
                }
                break;
            case 3:
                if (SP == 0){
                    CP = 0;
                    estado = 0;
                }
                break;
        }
        printf("\nEstado seguinte: E%d", estado);
    }
}