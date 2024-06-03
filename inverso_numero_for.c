#include <stdio.h>

int main() {
    int num, inverso = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        inverso = inverso * 10 + num % 10;
    }

    printf("El inverso del numero es: %d\n", inverso);
    return 0;
}
