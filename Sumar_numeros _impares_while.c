#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i;
        i += 2;
    }

    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma);
    return 0;
}
