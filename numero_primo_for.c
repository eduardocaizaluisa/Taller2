#include <stdio.h>

int main() {
    int num, es_primo = 1;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        es_primo = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                es_primo = 0;
                break;
            }
        }
    }

    if (es_primo) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }

    return 0;
}
