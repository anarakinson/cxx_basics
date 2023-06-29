#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>


// print str and highlights text with red color from to
void print_red(const std::string &str, std::size_t from, std::size_t to) {
    const char *red = "\033[0;31m";
    const char *no_color = "\033[0m";
    from = std::min(from, str.size());
    to = std::min(to, str.size());
    std::cout.write(str.data(), from);
    std::cout << red;
    std::cout.write(str.data() + from, to-from);
    std::cout << no_color;
    std::cout.write(str.data() + to, str.size() - to);

    // std::cout << std::endl << std::endl << std::endl;
    // std::cout << "str.size" << str.size() << std::endl;
    // std::cout << "str.data()" << str.data() << std::endl;
}

int main() {
    std::string str;
    std::size_t from, to;
    
    std::cout << "Input text: ";
    std::getline(std::cin, str);
    std::cout << "Input start and end: ";
    std::cin >> from >> to;

    print_red(str, from, to);

}