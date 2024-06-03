#include <stdio.h>

int main() {
    int n, triangular = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        triangular += i;
    }

    printf("El %d-esimo numero triangular es: %d\n", n, triangular);
    return 0;
}
