#include <iostream>
#include <iomanip>

int main() {
    double num;
    std::cout << "Ingresa un numero: ";
    std::cin >> num;
    std::cout << "El numero ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;
}