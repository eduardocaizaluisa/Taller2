#include <stdio.h>

int main() {
    int n, triangular = 0, i = 1;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    while (i <= n) {
        triangular += i;
        i++;
    }

    printf("El %d-esimo numero triangular es: %d\n", n, triangular);
    return 0;
}
