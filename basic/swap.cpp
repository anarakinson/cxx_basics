#include <iostream>
#include <string>
#include <vector>


int main() {

    // int a = 1;
    // int b = 123;

    std::string a = "asdf";
    std::string b = "qwerty123";
    
    std::cout << "a: " << a << " *** b: " << b << std::endl;

    std::swap(a, b);
    std::cout << "a: " << a << " *** b: " << b << std::endl;

    /* --------------------------------------------------------------------------------- */
    std::vector<std::string> vec_a{"asd", "sda", "das"};
    std::vector<std::string> vec_b{"qweasd", "sqwda", "daqwes", "afwef", "sad", "asd", "aasds"};

    // show vectors
    std::cout << "vector a:  ";
    for (std::string &va : vec_a) {
        std::cout << va << " ";
    }
    std::cout << std::endl;
    std::cout << "vector b:  ";
    for (std::string &vb : vec_b) {
        std::cout << vb << " ";
    }
    std::cout << std::endl;

    // swap 
    std::swap(vec_a, vec_b);

    // show vectors again
    std::cout << "vector a:  ";
    for (std::string &va : vec_a) {
        std::cout << va << " ";
    }
    std::cout << std::endl;
    std::cout << "vector b:  ";
    for (std::string &vb : vec_b) {
        std::cout << vb << " ";
    }
    std::cout << std::endl;

} 