double addiere(double a, double b) {
    return a + b; // Gibt a plus b zurück
}

double subtrahiere(double a, double b) {
    return a - b; // Gibt a minus b zurück
}

double multipliziere(double a, double b) {
    return a * b; // Gibt a mal b zurück
}

double dividiere(double a, double b) {
    return a / b; // Gibt a geteilt durch b zurück
}

// Funktioniert bis Fakultät von 19. Ab 20 über dem Integer Limit.

int fakultaet(int n) {
    int ergebnis = 1; // Variable zum speichern des aktuellen Wertes
    for (int i = n; i > 0; i--) { // Wiederholung anhand der Eingabe
        ergebnis = ergebnis * i; // Jedes Mal mit dem Faktor multiplizieren
    }
    return ergebnis; // Ergebnis zurückgeben
}

int fakultaet_rekursiv(int n) {
    if (n == 1) { // Falls n = 1 ("maximale Tiefe erreicht")
        return 1; // 1 Zurückgeben -> Anfang der Berechnung
    }
    return fakultaet_rekursiv(n - 1) * n; // Zurückgeben aller vorherigen Schritte multipliziert mit dem eigenen Faktor
}

int fibonacci_iterativ(int n) {
    int letztesErgebnis = 0;
    int ergebnis = 1;

    for (int i = 0; i < n; i++) {
        ergebnis = ergebnis + letztesErgebnis;
        letztesErgebnis = ergebnis - letztesErgebnis;
    }
    return letztesErgebnis;
}

int fibonacci_rekursiv(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci_rekursiv(n - 2) + fibonacci_rekursiv(n - 1);
}