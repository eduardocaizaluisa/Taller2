#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    printf("Ingresa el numero de terminos de la serie aritmetica: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i;
        i++;
    }

    printf("La suma de los primeros %d terminos de la serie aritmetica es: %d\n", n, suma);
    return 0;
}
