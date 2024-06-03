#include <stdio.h>

int main() {
    int base, exponente, resultado = 0, i = 1, j;
    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    // Inicializamos el resultado en 1 para el caso de exponente 0
    if (exponente == 0) {
        resultado = 1;
    } else {
        int temp_resultado = base;
        do {
            resultado = 0;
            for (j = 0; j < base; j++) {
                resultado += temp_resultado;
            }
            temp_resultado = resultado;
            i++;
        } while (i < exponente);
    }

    printf("El resultado de %d^%d es: %d\n", base, exponente, resultado);
    return 0;
}
