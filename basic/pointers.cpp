#include <iostream> 

int main() {

    // int
    std::cout << "int - " << sizeof(int) << " bytes" << std::endl << std::endl;

    int arr[] = {1, 316, (256*2)+150, ((256*256)*24)+(256*123)+13, 1234567890};

    for (int i=0; i<5; ++i) {
        // show every element in array (address << element)
        std::cout << &arr[i] << " << " << arr[i] << std::endl;
    
        unsigned char *byte_pointer = (unsigned char *)&arr[i];
        // show every byte of int (address < [value])
        for (int j=0; j<sizeof(int); ++j) {
            std::cout << (int *)byte_pointer << " < [ " << (int)*byte_pointer << " ] ";
            ++byte_pointer;
        }
        std::cout << std::endl;
    }

    // float
    std::cout << std::endl;
    std::cout << "float - " << sizeof(float) << " bytes" << std::endl << std::endl;

    float farr[] = {1., 3.1415, (256*2)+150, ((256*256)*24)+(256*123)+13, 1234.567890};

    for (int i=0; i<5; ++i) {
        // show every element in array (address << element)
        std::cout << &farr[i] << " << " << farr[i] << std::endl;
    
        unsigned char *byte_pointer = (unsigned char *)&farr[i];
        // show every byte of int (address < [value])
        for (int j=0; j<sizeof(float); ++j) {
            std::cout << (int *)byte_pointer << " < [ " << (int)*byte_pointer << " ] ";
            ++byte_pointer;
        }
        std::cout << std::endl;
    }

}