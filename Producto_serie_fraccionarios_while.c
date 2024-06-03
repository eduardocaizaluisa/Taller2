#include <stdio.h>

int main() {
    int n, i = 1;
    double producto = 1.0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }

    printf("El producto de la serie hasta %d es: %.2lf\n", n, producto);
    return 0;
}
