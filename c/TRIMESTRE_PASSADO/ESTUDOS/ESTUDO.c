#include <stdio.h>

int main() {
    int a = 1;
    int b = 0;

    if (a == 1 && b == 1) {
        printf("Both a and b are true\n");
    } else {
        printf("At least one of a and b is false\n");
    }

    if (a == 1 || b == 1) {
        printf("At least one of a and b is true\n");
    } else {
        printf("Both a and b are false\n");
    }

    return 0;
}
