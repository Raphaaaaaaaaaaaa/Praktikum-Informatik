#include <stdio.h>
#include "werkzeuge.h"

void primzahlen_start(void) {
    int bereich = getEingabe("Primzahlen bis:\n", 2, 2000000000);

    printf("%-10s %-10s\n", "Nummer", "Primzahl");
    printf("%-10d %-10d\n", 1, 2);
    int counter = 2;

    for (int i = 3; i <= bereich; i+= 2) {
        int istPrimzahl = 1;

        for (int j = 3; j < i; j += 2) {
            if (i % j == 0) {
                istPrimzahl = 0;
                break;
            }
        }

        if (istPrimzahl == 1) {
            printf("%-10d %-10d\n", counter, i);
            counter++;
        }
    }
}