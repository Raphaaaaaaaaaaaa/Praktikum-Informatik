#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "werkzeuge.h"
#include "rechenmodul.h"

double a;
double b;
int c;

int main(void) {
    srand(time(NULL));

    while (1) {
        int eingabe = getEingabe("1) Addition\n2) Subtraktion\n3) Multiplikation\n4) Division\n4) Fakultaet\n", 1,4);

        switch (eingabe) {
            case 1:
                a = getEingabeDouble("Erster Summand:\n");
                b = getEingabeDouble("Zweiter Summand:\n");
                printf("Summe: %.2lf\n", addiere(a,b));
                break;
            case 2:
                a = getEingabeDouble("Minuend:\n");
                b = getEingabeDouble("Subtrahend:\n");
                printf("Differenz: %.2lf\n", subtrahiere(a,b));
                break;
            case 3:
                a = getEingabeDouble("Erster Faktor:\n");
                b = getEingabeDouble("Zweiter Faktor:\n");
                printf("Produkt: %.2lf\n", multipliziere(a,b));
                break;
            case 4:
                a = getEingabeDouble("Dividend:\n");
                b = getEingabeDouble("Divisor:\n");
                if (b == 0) {
                    printf("Eine Division durch 0 ist nicht moeglich!\n");
                } else {
                    printf("Quotient: %.2lf\n", dividiere(a,b));
                }
                break;
            case 5:
                c = getEingabeInt("Fakultaet von:\n");
                printf("Ergebnis: %d\n", fakultaet(c));
                break;
            case 6:
                printf("Auf Wiedersehen!");
                return EXIT_SUCCESS;
            default:
                return EXIT_FAILURE;
        }
    }
}