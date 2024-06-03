#include <stdio.h>

int main() {
    int n, i = 1;
    double suma = 0.0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    do {
        suma += 1.0 / i;
        i++;
    } while (i <= n);

    printf("La suma de la serie hasta %d es: %.2lf\n", n, suma);
    return 0;
}
