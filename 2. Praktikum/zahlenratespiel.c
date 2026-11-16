#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "werkzeuge.h"

void zahlenratespiel_start(void) {
    int ziel = rand() % 100 + 1;
    int versuche = 1;

    while (1) {
        int eingabe = getEingabe("Rate (1-100):", 1, 100);

        if (eingabe == ziel) {
            printf("Richtig! Du hast %d Versuche gebraucht.\n", versuche);
            return;
        } else if (eingabe > ziel) {
            printf("Zu gross :(\n\n");
        } else {
            printf("Zu klein :(\n\n");
        }

        versuche++;
    }
}