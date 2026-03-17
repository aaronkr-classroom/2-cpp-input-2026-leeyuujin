#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "Larger number: " << a << std::endl;
    }
    else if (b > a) {
        std::cout << "Larger number: " << b << std::endl;
    }
    else {
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}