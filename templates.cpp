
#include <iostream> 


template <typename T>
void test(T x) {
    std::cout << "hello" << std::endl;
}

template <>
void test<uint8_t>(uint8_t x) {
    std::cout << x << std::endl;
}   
// the same as simple overload:
// void test<char>(char x) {
void test(const char * x) {
    std::cout << x << std::endl;
}

int main() {

    uint8_t x = 1;
    test(1);
    test(1.0);
    test(x);
    test("a");
    test('a');

}