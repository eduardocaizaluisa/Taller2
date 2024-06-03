#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;
    printf("Ingresa el numero de terminos de la serie geometrica: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        producto *= 2;
    }

    printf("El producto de los primeros %d terminos de la serie geometrica es: %.0lf\n", n, producto);
    return 0;
}
