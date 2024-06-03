#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    while (num != 0) {
        count++;
        num /= 10;
    }

    printf("El numero de dígitos es: %d\n", count);
    return 0;
}
