#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingresa el número de terminos de la serie aritmetica: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    printf("La suma de los primeros %d terminos de la serie aritmetica es: %d\n", n, suma);
    return 0;
}
