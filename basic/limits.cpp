
#include <iomanip>
#include <math.h>
#include <limits>
#include <iostream>


int main() {

    double a = 0.2;
    double b = 1 / sqrt(5) / sqrt(5);

    std::cout << std::setprecision(10) << std::fixed << a << " - " << b << " - " << (std::abs(a - b) <= std::numeric_limits<double>::epsilon()) << std::endl;

    std::cout << "(a == b): " << (a == b) << std::endl;

    std::cout << "(abs(a - b) <= numeric_limits<float>::epsilon()): " << (std::abs(a - b) <= std::numeric_limits<double>::epsilon()) << std::endl;
    
}