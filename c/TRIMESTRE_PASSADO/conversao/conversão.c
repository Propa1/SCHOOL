#include <stdio.h>

int main(){
    int decimal, binario[100], i = 0;

    printf("Insira um numero decimal: ");
    scanf("%d", &decimal);
    getchar();

    while(decimal > 0){
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("O numero em binario e: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }

    printf("\nPress any key to exit...");
    getchar();
}