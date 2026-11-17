#include <stdio.h>

double addiere(double a, double b) {
    return a + b;
}

double subtrahiere(double a, double b) {
    return a - b;
}

double multipliziere(double a, double b) {
    return a * b;
}

double dividiere(double a, double b) {
    return a / b;
}

int fakultaet(int n) {
    int ergebnis = 1;
    for (int i = n; i > 0; i--) {
        ergebnis = ergebnis * i;
    }
    return ergebnis;
}

int fakultaet_rekursiv_schritt(int n, int wert) {
    if (n == 1) {
        return wert;
    } else {
        return fakultaet_rekursiv_schritt(n-1, wert);
    }
}

int fakultaet_rekursiv(int n) {
    fakultaet_rekursiv_schritt(n, 1);
}