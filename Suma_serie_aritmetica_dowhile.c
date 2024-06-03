#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    printf("Ingresa el numero de terminos de la serie aritmetica: ");
    scanf("%d", &n);

    if (n > 0) {
        do {
            suma += i;
            i++;
        } while (i <= n);
    }

    printf("La suma de los primeros %d terminos de la serie aritmetica es: %d\n", n, suma);
    return 0;
}
