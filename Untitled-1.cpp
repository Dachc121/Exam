#include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Ingrese un número entero: ";
    cin >> num;

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

    cout << "El número de un dígito es: " << num << endl;

    return 0;