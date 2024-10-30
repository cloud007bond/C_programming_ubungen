#include <stdio.h>

int main() {
    printf("Uebung 9: --- was, wenn man %%d statt %%f verwendet oder umgekehrt ---\n");

    int integer = 100;
    float floating = 3.14;

    // Incorrect usage
    printf("Ganzzahl mit %%f: %f\n", integer);
    printf("Float mit %%d: %d\n", floating);

    return 0;
}

