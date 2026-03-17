#include <iostream>

int main() {
    int n, w, h;

    std::cout << "Square size: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Rectangle width height: ";
    std::cin >> w >> h;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Triangle height: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}