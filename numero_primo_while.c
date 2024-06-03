#include <stdio.h>

int main() {
    int num, es_primo = 1, i = 2;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        es_primo = 0;
    } else {
        while (i <= num / 2) {
            if (num % i == 0) {
                es_primo = 0;
                break;
            }
            i++;
        }
    }

    if (es_primo) {
        printf("%d es primo\n", num);
    } else {
        printf("%d no es primo\n", num);
    }

    return 0;
}
