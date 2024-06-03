#include <stdio.h>

int main() {
    int num, inverso = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num == 0) {
        inverso = 0;
    } else {
        do {
            inverso = inverso * 10 + num % 10;
            num /= 10;
        } while (num != 0);
    }

    printf("El inverso del numero es: %d\n", inverso);
    return 0;
}
