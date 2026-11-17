#include <stdio.h>
#include "werkzeuge.h"

void pyramide_start(void) {
    int hoehe = getEingabe("Hoehe der Pyramide:\n", 1, 20);
    printf("Hoehe: %d\n", hoehe);

    for (int i = 1; i <= hoehe; i++) {
        for (int j = 1; j <= hoehe - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}