#include <stdio.h>
#include <stdlib.h>

int SP, SC, VA = 0, VE = 0, SN, CP, loop = 0; 

void ciclos(){
    do{
        SP = rand() % 2;

        if(SP == 0){
            printf("Balde vazio\n");

            SC = rand() % 2;

            if(SC == 1){
                VA = 1;
                printf("A cor do balde é azul\n");

                do{
                    SN = rand() % 2;

                    if(SN == 1){
                        printf("Balde cheio\n");

                        do{
                            CP = rand() % 2;

                            if(CP == 1){
                                printf("Cilindro pneumatico activo\n");
                                printf("Balde Retirado da area de trabalho\n");
                                main();
                            }else{
                                printf("Cilindro pneumatico falhou a activar\n");
                            }

                        }while(CP != 1);

                    }
                    else{
                        printf("Balde não cheio\n");
                    }

                }while(SN != 1);
            }else{
                VE = 1;
                printf("A cor do balde é vermelho\n");

                do{
                    SN = rand() % 2;
                    
                    if(SN == 1){
                        printf("Balde cheio\n");

                        do{
                            CP = rand() % 2;

                            if(CP == 1){
                                printf("Cilindro pneumatico activo\n");
                                printf("Balde Retirado da area de trabalho\n");
                                main();
                            }else{
                                printf("Cilindro pneumatico falhou a activar\n");
                            }

                        }while(CP != 1);

                    }else{
                        printf("Balde não cheio\n");
                    }

                }while(SN != 1);
            }
        }else{
            printf("Balde cheio\n");
            loop = 1;
        }

    }while(loop == 1);

}

int main(){
    do{
        SP = rand() % 2;

        if(SP == 1){
            printf("Balde Existe\n");
            ciclos();
        }else{
            printf("Balde nao Existe\n");
        }

    }while(SP != 1);
}