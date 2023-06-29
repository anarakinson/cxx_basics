#include <iostream>
#include <fstream>
#include <string>


int main() {

    std::fstream fsin("test.txt", std::fstream::in);

    std::string line, num;

    fsin.ignore();
    getline(fsin, line);
    std::cout << line << std::endl;

    fsin.close();

}