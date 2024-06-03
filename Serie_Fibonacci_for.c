#include <stdio.h>

int main() {
    int n = 10; // Número de elementos de la serie de Fibonacci
    int a = 0, b = 1, temp;
    printf("Serie de Fibonacci: ");

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(", %d", b);
        } else {
            temp = a + b;
            a = b;
            b = temp;
            printf(", %d", b);
        }
    }
    printf("\n");
    return 0;
}
