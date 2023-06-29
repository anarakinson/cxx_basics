#include <iostream>
#include <string>


int main() {

    std::string str{"123 dsa"};
    size_t st{};

    int x = stoi(str, &st);

    std::cout << x << std::endl;

}