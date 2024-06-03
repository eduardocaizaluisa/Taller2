#include <stdio.h>

int main() {
    int n, factorial = 1, i = 1;
    printf("Ingresa un numero para calcular su factorial: ");
    scanf("%d", &n);

    if (n == 0) {
        factorial = 1;
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= n);
    }

    printf("El factorial de %d es: %d\n", n, factorial);
    return 0;
}
