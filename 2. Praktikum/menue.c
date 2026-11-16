#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "werkzeuge.h"
#include "zahlenratespiel.h"
#include "primzahlen.h"
#include "pyramide.h"

int main(void) {
    srand(time(NULL));

    while (1) {
        int eingabe = getEingabe("1) Ratespiel starten\n2) Primzahlen ausgeben\n3) Pyramide\n4) beenden\n", 1,4);

        switch (eingabe) {
            case 1:
                zahlenratespiel_start();
                break;
            case 2:
                primzahlen_start();
                break;
            case 3:
                pyramide_start();
                break;
            case 4:
                printf("Auf Wiedersehen!");
                return EXIT_SUCCESS;
            default:
                return EXIT_FAILURE;
        }
    }
}