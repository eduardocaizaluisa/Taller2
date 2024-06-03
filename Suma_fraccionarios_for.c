#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    printf("La suma de la serie hasta %d es: %.2lf\n", n, suma);
    return 0;
}
