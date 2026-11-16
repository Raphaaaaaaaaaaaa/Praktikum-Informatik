#include <stdio> // .h nicht vorhanden (fatal error: stdio: No such file or directory)

int main(void) {
    printf("Hallo, Raphael!") // Semikolon nicht vorhanden (error: expected ';' before 'return')
    return; // Keine Rückgabe (error: 'return' with no value, in function returning non-void [-Wreturn-mismatch])
}