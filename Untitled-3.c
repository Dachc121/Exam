#include <stdio.h>

int suma_digitos(int num) {
    int suma = 0;

    while (num != 0) {
        suma += num % 10;
        num /= 10;
    }

    return suma;
}

int digito_uno_a_nue

