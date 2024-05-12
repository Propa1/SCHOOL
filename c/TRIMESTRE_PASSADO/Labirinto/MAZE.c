#include <stdio.h>
#include <stdlib.h> 

#define N 5

int maze[N][N];
int solution[N][N];

void mazecreation(){
    int i, j;
    int one_index = rand() % N; 
    for(i = 0; i < N; i++){
        if (one_index > 0 && (rand() % 2 == 0 || one_index == N - 1)) {
            one_index--;
        } else if (one_index < N - 1) {
            one_index++;
        }

        for(j = 0; j < N; j++){
            if(j == one_index){
                solution[i][j] = 1;
            } else {
                solution[i][j] = rand() % 2;
            }
        }
    }
}

void printmaze(){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", solution[i][j]);
        }
        printf("\n");
    }
}

void computeguess(){
    printf("the solution is a sequence of 0s and 1s\n");
    printf("lets see if the computer can guess the solution\n");

    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            do{
                maze[i][j] = rand() % 2;
            } while(maze[i][j] != solution[i][j]);
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    } 

    printf("the computer guessed the solution\n");
    printf("the solution is\n");
    printmaze();
}

int main(){
    for(int loop = 0; loop < 5; loop++){ 
        mazecreation();
        computeguess();
    }

    return 0;
}


