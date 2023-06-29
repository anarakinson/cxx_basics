#include <iostream> 


// check bit is 1 or 0
bool isSetBit(int number, int index) {
    return (number & (1 << index)) != 0;
}

// set bit to 1
int setBit(int number, int index) {
    return number | (1 << index);
}

// set bit to 0
int resetBit(int number, int index) {
    return number & ~(1 << index);
}

// inverse bit 0to1 or 1to0
int inverseBit(int number, int index) {
    return number ^ (1 << index);
}



int main() {

    int x;

    std::cin >> x;

    int y = x >> 1;

    int z = x << 1;

    std::cout << z << " << " << x << " >> " << y << std::endl;


    for (int i = 0; i < 2 * 8; ++i) {
        std::cout << isSetBit(x, i) << " ";
    }
    std::cout << std::endl;
    
    for (int i = 0; i < 2 * 8; ++i) {
        x = inverseBit(x, i);
    }
    std::cout << x << std::endl;
    for (int i = 0; i < 2 * 8; ++i) {
        std::cout << isSetBit(x, i) << " ";
    }
    std::cout << std::endl;

}   