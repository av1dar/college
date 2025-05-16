#include <iostream>

int main() {
    char ch;
    std::cout << "enter №: ";
    std::cin >> ch;

    std::cout << "№: " << ch << "\n";
    std::cout << "ASCII-cod (10): " << int(ch) << "\n";
    std::cout << "ASCII-cod	 (16): " << std::hex << int(ch) << "\n";

    return 0;
}
