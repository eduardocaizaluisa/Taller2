#include <stdio.h>

int main() {
    int num, raiz = 0, acumulador = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num == 0) {
        raiz = 0;
    } else {
        do {
            acumulador += (3 * raiz * raiz) + (3 * raiz) + 1;
            if (acumulador > num) break;
            raiz++;
        } while (acumulador < num);
    }

    if (acumulador != num) {
        printf("El numero no tiene una raiz cubica exacta.\n");
    } else {
        printf("La raíz cúbica de %d es: %d\n", num, raiz);
    }
    return 0;
}
