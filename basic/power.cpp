#include <iostream>
#include <math.h>

namespace myspace {
    double pow(double base, int exp) {
        double result = 1;
        bool negative = false;

        if (exp < 0) {
            negative = true;
            exp *= -1;
        }
        for (int i=0; i<exp; ++i) {
            result *= base;
        }
        if (negative) {
            result = 1 / result;
        }
        return result;
    }
}


int main() {
    double base;
    int exp;

    std::cout << "input base: ";
    std::cin >> base;
    std::cout << "input exp: ";
    std::cin >> exp;
    std::cout << std::endl; 
    std::cout << myspace::pow(base, exp) << std::endl;
    std::cout << std::pow(base, exp) << std::endl;
}