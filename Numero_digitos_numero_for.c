#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        count++;
    }

    printf("El numero de dígitos es: %d\n", count);
    return 0;
}
