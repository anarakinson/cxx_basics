#include <iostream>
#include <string>
#include <cstring>
#include <iostream>



// check if string is convertable to int
bool is_number(const std::string &str) {
    bool success = strspn(str.c_str(), "-.0123456789") == str.size();
    return success && !str.empty();
}

int main() {

    std::string x;

    while (true) {
        getline(std::cin, x);
        bool isnum = is_number(x);
        std::cout << isnum << std::endl;
    }

}