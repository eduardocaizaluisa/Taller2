#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    do {
        sum += num % 10;
        num /= 10;
    } while (num != 0);

    printf("La suma de los digitos es: %d\n", sum);
    return 0;
}
