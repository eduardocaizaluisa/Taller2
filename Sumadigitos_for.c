#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        sum += num % 10;
    }

    printf("La suma de los digitos es: %d\n", sum);
    return 0;
}
