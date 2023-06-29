#include <iostream>
#include <fstream>
#include <filesystem>


int main() {

    std::filesystem::path current = std::filesystem::current_path();

    std::cout << current << std::endl;

    
    std::filesystem::path non_current = current / ".." / ".." / "somefile.txt";

    std::cout << non_current << std::endl;

}