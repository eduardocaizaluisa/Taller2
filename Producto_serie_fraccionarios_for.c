#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    printf("El producto de la serie hasta %d es: %.2lf\n", n, producto);
    return 0;
}
