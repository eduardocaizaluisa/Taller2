#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int fact = 1, i = 2;
        do {
            fact *= i;
            i++;
        } while (i <= n);
        return fact;
    }
}

int main() {
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    int suma = 0, i = 1;
    do {
        suma += factorial(i);
        i++;
    } while (i <= n);

    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}
