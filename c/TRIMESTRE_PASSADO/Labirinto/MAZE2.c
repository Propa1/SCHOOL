#include <stdio.h>

#define N 5

int maze[N][N];

void printmaze(){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

int solveMaze(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= N) {
        return 0;
    }

    if (maze[x][y] == 0) {
        maze[x][y] = 1;

        printmaze();  // Print the maze after each successful move

        if (x == N - 1 && y == N - 1) {
            return 1;
        }

        if (solveMaze(x + 1, y) || solveMaze(x - 1, y) || solveMaze(x, y + 1) || solveMaze(x, y - 1)) {
            return 1;
        }

        maze[x][y] = 0;  
    }

    return 0;
}

int main() {
    do {
        printf("The maze is:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", maze[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("The maze is %s\n", solveMaze(0, 0) ? "solved" : "not solved");
    } while (getchar() != 'q');

    return 0;
}