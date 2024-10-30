#include <stdio.h>

int main() {
    printf("Uebung 5: --- Ueberlaeufe von Variablen ---\n");

    unsigned char max_char = 255;
    unsigned char overflow_char = max_char + 1;
    printf("Maximalwert von unsigned char: %u\n", max_char);
    printf("Overflow von unsigned char: %u\n", overflow_char);

    return 0;
}

