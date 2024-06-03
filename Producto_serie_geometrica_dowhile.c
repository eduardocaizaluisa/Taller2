#include <stdio.h>

int main() {
    int n, i = 0;
    double producto = 1.0;
    printf("Ingresa el numero de terminos de la serie geometrica: ");
    scanf("%d", &n);

    if (n > 0) {
        do {
            producto += producto;
            i++;
        } while (i < n);
    }

    printf("El producto de los primeros %d terminos de la serie geometrica es: %.0lf\n", n, producto);
    return 0;
}
