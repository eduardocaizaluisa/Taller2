#include <stdio.h>

int main() {
    int n, contador = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        int es_primo = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                es_primo = 0;
                break;
            }
        }
        if (es_primo) {
            contador++;
        }
    }

    printf("Hay %d numeros primos desde 1 hasta %d\n", contador, n);
    return 0;
}



