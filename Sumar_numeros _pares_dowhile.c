#include <stdio.h>

int main() {
    int n, suma = 0, i = 2;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    do {
        suma += i;
        i += 2;
    } while (i <= n);

    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);
    return 0;
}
