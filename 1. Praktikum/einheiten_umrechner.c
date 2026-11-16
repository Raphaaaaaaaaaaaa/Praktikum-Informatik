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

    double getEingabe(char* einheit) {
        double eingabe;
        while (1) {
            printf("%s", einheit);

            if (scanf("%lf", &eingabe) == 1) {
                clearBuffer();
                return eingabe;
            } else {
                clearBuffer();
                printf("\nUngueltige Eingabe. Bitte eine Zahl eingeben.");
            }
        }
    }

int main(void) {
    int auswahl;
    double eingabe;
    double ausgabe;

    printf("1) Celsius -> Fahrenheit\n2) Fahrenheit -> Celsius\n3) Meter -> Fuss\n4) Fuss -> Meter\n");
    while (1) {
        printf("\nAuswahl: ");

        if (scanf("%d", &auswahl) == 1) {
            clearBuffer();
            if (auswahl >= 1 && auswahl <= 4) {
                break;
            } else {
                printf("\nBitte eine Zahl von 1 bis 4 eingeben.");
            }
        } else {
            clearBuffer();
            printf("\nUngueltige Eingabe. Bitte eine Zahl eingeben.");
        }
    }

    switch (auswahl) {
        case 1:
            eingabe = getEingabe("\nCelsius:");

            ausgabe = eingabe * 9.0 / 5.0 + 32.0;
            printf("\n%.2lf C = %.2lf F", eingabe, ausgabe);
            break;
        case 2:
            eingabe = getEingabe("\nFahrenheit:");

            ausgabe = (eingabe - 32.0) * 5.0 / 9.0;
            printf("\n%.2lf F = %.2lf C", eingabe, ausgabe);
            break;
        case 3:
            eingabe = getEingabe("\nMeter:");

            ausgabe = eingabe * 3.28084;
            printf("\n%.2lf m = %.2lf ft", eingabe, ausgabe);
            break;
        case 4:
            eingabe = getEingabe("\nFuss:");

            ausgabe = eingabe / 3.28084;
            printf("\n%.2lf ft = %.2lf m", eingabe, ausgabe);
            break;
        default:
            printf("Auswahl ungueltig.");
            return 0;
    }
    return 0;
}