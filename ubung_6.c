#include <stdio.h>

int main() {
    printf("Uebung 6: --- Formatbezeichner ---\n");

    int decimal = 255;
    int octal = 0377;
    int hex_lower = 0xff;
    int hex_upper = 0xFF;
    float floating = 3.14;
    char character = 'A';
    char string[] = "Beispiel";

    printf("Dezimal: %d\n", decimal);
    printf("Ganzzahl (%%i): %i\n", decimal);
    printf("Oktal: %o\n", octal);
    printf("Hexadezimal (klein): %x\n", hex_lower);
    printf("Hexadezimal (gross): %X\n", hex_upper);
    printf("Float: %f\n", floating);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    return 0;
}

