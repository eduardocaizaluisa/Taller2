#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int fact = 1, i = 2;
        while (i <= n) {
            fact *= i;
            i++;
        }
        return fact;
    }
}

int main() {
    int n;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    int suma = 0, i = 1;
    while (i <= n) {
        suma += factorial(i);
        i++;
    }

    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);
    return 0;
}
