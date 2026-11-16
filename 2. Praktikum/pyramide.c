#include <stdio.h>
#include "werkzeuge.h"

void pyramide_start(void) {
    int hoehe = getEingabe("Hoehe der Pyramide:\n", 1, 20);
    printf("Hoehe: %d\n", hoehe);

    for (int i = hoehe; i >= 1; i--) {
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        printf("*");

        for (int j = 1; j <= (hoehe - i) * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
}