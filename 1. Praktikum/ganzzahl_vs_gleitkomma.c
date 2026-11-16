#include <stdio.h>

int main(void) {
    int a = 7;
    int b = 2;

    double x = 7.0;
    double y = 2.0;

    double ab = a / b; // Integer durch Integer: Das Ergebnis ist ein Integer und der Rest wird abgeschnitten und geht "verloren"
    double xy = x / y; // Double durch Double: Das Ergebnis ist ein Double und kann die .5 darstellen
    double amodb = a % b; // Der Rest von a/b (Immer eine Ganzzahl)

    printf("a / b = %lf\n", ab);
    printf("x / y = %lf \n", xy);
    printf("a %% b = %lf", amodb);

    return 0;
}