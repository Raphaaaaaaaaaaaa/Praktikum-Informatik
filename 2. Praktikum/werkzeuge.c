#include <stdio.h>

void clearBuffer(void) {
    int zeichen;

    while (1) {
        zeichen = getchar();

        if (zeichen == '\n' || zeichen == EOF) {
            return;
        }
    }
}

int getEingabe(char* text, int min, int max) {
    int eingabe;

    while (1) {
        printf("%s", text);

        if (scanf("%d", &eingabe) == 1 && eingabe >= min && eingabe <= max) {
            clearBuffer();
            return eingabe;
        } else {
            clearBuffer();
            printf("\nUngueltige Eingabe. Bitte eine Zahl zwischen %d und %d eingeben.\n", min, max);
        }
    }
}