#include <iostream>


unsigned int gcd(unsigned int a, unsigned int b) {
    
    std::cout << a << ' ' << b << std::endl;
    
    if (b > a) {
        unsigned int temp = a;
        a = b;
        b = temp;
    }

    unsigned int c;

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;

} 


int main(int argc, char **argv) {

    const auto a = atoll(argv[1]);
    const auto b = atoll(argv[2]);

    std::cout << a << ' ' << b << std::endl;

    const auto result = gcd(a, b);

    std::cout << result << std::endl;
    std::cerr << "fuck" << std::endl;
    return 0;

}