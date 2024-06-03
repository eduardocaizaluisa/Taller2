#include <stdio.h>

int main() {
    int n, contador = 0, num = 2;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    while (num <= n) {
        int es_primo = 1;
        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                es_primo = 0;
                break;
            }
            i++;
        }
        if (es_primo) {
            contador++;
        }
        num++;
    }

    printf("Hay %d numeros primos desde 1 hasta %d\n", contador, n);
    return 0;
}
