#include <iostream>
#include <iomanip> 

int main() {
    double a, b;

    std::cout << "№1: ";
    std::cin >> a;
    std::cout << "№2: ";
    std::cin >> b;
    std::cout << std::fixed << std::setprecision(12);
    std::cout << "sum: " << a + b << std::endl;
    std::cout << "difference between: " << a - b << std::endl;
    std::cout << "product: " << a * b << std::endl;

    if (b != 0)
        std::cout << "fraction: " << a / b << std::endl;
    else
        std::cout << "fraction:division by zero is impossible!" << std::endl;

    return 0;
}
