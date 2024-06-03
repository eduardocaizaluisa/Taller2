#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }

    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}
