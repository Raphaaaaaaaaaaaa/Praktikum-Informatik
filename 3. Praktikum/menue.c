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
        int eingabe = getEingabe("1) Addition\n2) Subtraktion\n3) Multiplikation\n4) Division\n5) Fakultaet\n6) Fibonacci\n7) Fibonacci Vergleich\n8) Beenden\n", 1,8);

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
                c = getEingabe("Fakultaet von:\n", 1, 19);
                printf("%-10s %-10s\n", "Iterativ", "Rekursiv");
                printf("%-10d %-10d\n", fakultaet(c), fakultaet_rekursiv(c));
                break;
            case 6:
                c = getEingabe("Fibonacci-Zahl:\n", 1, 46);
                long start = clock();
                int iterativ = fibonacci_iterativ(c);
                long iterativ_zeit = clock() - start;

                start = clock();
                int rekursiv = fibonacci_rekursiv(c);
                long rekursiv_zeit = clock() - start;
                printf("%-10d %-10d %-10ld %-10d %-10ld\n", c, iterativ, iterativ_zeit, rekursiv, rekursiv_zeit);
                break;
            case 7:
                c = getEingabe("Fibonacci-Zahlen bis:\n", 1, 46);
                printf("%-10s %-10s %-10s %-10s %-10s\n", "Nummer", "Iterativ", "Iterativ-Zeit", "Rekursiv", "Rekursiv-Zeit");
                for (int i = 0; i <= c; i++) {
                    long start = clock();
                    int iterativ = fibonacci_iterativ(i);
                    long iterativ_zeit = clock() - start;

                    start = clock();
                    int rekursiv = fibonacci_rekursiv(i);
                    long rekursiv_zeit = clock() - start;
                    printf("%-10d %-10d %-10ld %-10d %-10ld\n", i, iterativ, iterativ_zeit, rekursiv, rekursiv_zeit);
                }
                break;
                break;
            case 8:
                printf("Auf Wiedersehen!");
                return EXIT_SUCCESS;
            default:
                return EXIT_FAILURE;
        }
    }
}