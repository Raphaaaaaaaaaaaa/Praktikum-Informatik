#include <stdio.h>

int main(void) {
    printf("%8s %8s \n", "Celsius", "Fahrenheit");
    for (double celsius = -20; celsius <= 100; celsius += 10) {
        double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("%8.2f %8.2f \n", celsius, fahrenheit);
    }
    return 0;
}