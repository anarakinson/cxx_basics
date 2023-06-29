#include <iostream>
#include <fstream>
#include <string>

int main() {

    // write to file
    double variable = 123;
    std::string str_variable;
    // create fstream class exemplar
    std::fstream fsout;

    // open file (create and open if not exists) 
    fsout.open("test.txt", std::fstream::out);
    // write to file
    fsout << "Hello" << std::endl;
    
    // save the number
    std::cout << "input the number: ";
    std::cin >> variable;
    // check value is number
    if (std::cin.fail()) {
		std::cout << "Bad value!" << std::endl;
		return -1;
    }
    fsout << "int variable: " << variable << std::endl;
    
    // save the string
    std::cout << "input some words: ";
    std::cin.ignore(); // skip excess endline after previous input
    std::getline(std::cin, str_variable);
    fsout << "Some words from input: " << str_variable << std::endl;
    
    fsout << "Bye!" << std::endl;
    // close file
    fsout.close();

    // append to the end of file
    fsout.open("test.txt", std::fstream::out | std::fstream::app);
    fsout << std::endl << "some addition at the end" << std::endl;
    fsout.close(); 

    /* ----------------------------------------------- */
    // read from file
    std::fstream fsin;

    fsin.open("test.txt", std::fstream::in);
    // std::ifstream fsin{"test.txt"};
    
    // check that file exists, if dont check exists - nothing happens
    if (!fsin.is_open()) {
        std::cout << "file does not exists" << std::endl;
        return 1;
    }
    std::string word1, word2;
    fsin >> word1;
    fsin >> word2;
    std::cout << word1 << std::endl;
    std::cout << word2 << std::endl;
    std::cout << "   ...   " << std::endl;
    fsin.close();

    // read all lines in file
    fsin.open("test.txt", std::fstream::in);
    std::string line;
    // while (!fsin.eof()) {
    while (std::getline(fsin, line)) {
        std::cout << line << std::endl;
    }
    fsin.close();
}