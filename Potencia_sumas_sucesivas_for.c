#include <stdio.h>

int main() {
    int base, exponente, resultado = 0, i, j;
    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    // Inicializamos el resultado en 1 para el caso de exponente 0
    if (exponente == 0) {
        resultado = 1;
    } else {
        int temp_resultado = base;
        for (i = 1; i < exponente; i++) {
            resultado = 0;
            for (j = 0; j < base; j++) {
                resultado += temp_resultado;
            }
            temp_resultado = resultado;
        }
    }

    printf("El resultado de %d^%d es: %d\n", base, exponente, resultado);
    return 0;
}
