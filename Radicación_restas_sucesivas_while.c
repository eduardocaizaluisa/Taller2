#include <stdio.h>

int main() {
    int num, raiz = 0, acumulador = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    while (acumulador < num) {
        acumulador += (3 * raiz * raiz) + (3 * raiz) + 1;
        if (acumulador >= num) break;
        raiz++;
    }

    if (acumulador != num) {
        printf("El numero no tiene una raiz cubica exacta.\n");
    } else {
        printf("La raiz cubica de %d es: %d\n", num, raiz);
    }
    return 0;
}
