#include <stdio.h>

int main() {
    int n, factorial = 1, i = 1;
    printf("Ingresa un numero para calcular su factorial: ");
    scanf("%d", &n);

    while (i <= n) {
        factorial *= i;
        i++;
    }

    printf("El factorial de %d es: %d\n", n, factorial);
    return 0;
}
