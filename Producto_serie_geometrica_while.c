#include <stdio.h>

int main() {
    int n, i = 0;
    double producto = 1.0;
    printf("Ingresa el número de términos de la serie geométrica: ");
    scanf("%d", &n);

    while (i < n) {
        producto += producto;
        i++;
    }

    printf("El producto de los primeros %d terminos de la serie geometrica es: %.0lf\n", n, producto);
    return 0;
}
