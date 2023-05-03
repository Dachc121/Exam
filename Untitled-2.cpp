#include <stdio.h>

int main() {
    int num, sum;

    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    // si el número tiene más de un dígito, sumar sus dígitos
    while (num > 9) {
        sum = 0;

        // sumar los dígitos de num
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        num = sum;
    }

    printf("El número de un dígito es: %d\n", num);

    return 0;
}

