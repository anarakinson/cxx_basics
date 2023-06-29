#include <iostream> 


int main() {

    int x;
    std::cin >> x;

    std::string res = (x >= 0) ? "positive" : "negative";

    std::cout << res << std::endl; 

}