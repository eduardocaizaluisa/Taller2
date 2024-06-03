#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);
    return 0;
}
