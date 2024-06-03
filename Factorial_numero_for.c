#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Ingresa un numero para calcular su factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es: %d\n", n, factorial);
    return 0;
}
