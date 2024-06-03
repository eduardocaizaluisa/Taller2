#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;
    } else {
        do {
            count++;
            num /= 10;
        } while (num != 0);
    }

    printf("El numero de dígitos es: %d\n", count);
    return 0;
}
