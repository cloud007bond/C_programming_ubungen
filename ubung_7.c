#include <stdio.h>

int main() {
    printf("Uebung 7: --- Formatbezeichner mit Feldbreite und Flags ---\n");

    int number = 123;
    float decimal = 3.14159;
    char character = 'X';
    char string[] = "Hello";

    printf("Nummer mit Feldbreite 10: %10d\n", number);
    printf("Nummer mit führenden Nullen: %010d\n", number);
    printf("Float mit 2 Dezimalstellen: %.2f\n", decimal);
    printf("Links ausgerichtete Zeichenkette: %-10s\n", string);
    printf("Zeichen: %c\n", character);

    return 0;
}

