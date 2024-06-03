#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    do {
        suma += i * i;
        i++;
    } while (i <= n);

    printf("La suma de los cuadrados de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}
