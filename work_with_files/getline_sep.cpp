#include <iostream>
#include <fstream>
#include <string>


int main() {

    std::fstream fsin("test2.txt", std::fstream::in);

    std::string line, num;

    while (getline(fsin, line, '-') && getline(fsin, num)) {
        std::cout << line << " <<< " << stoi(num) << std::endl;
    }

    fsin.close();

}