#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (num2 != 0);

    printf("El MCD de los numeros ingresados es: %d\n", num1);
    return 0;
}
