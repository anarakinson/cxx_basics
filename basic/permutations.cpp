#include <iostream>
#include <algorithm>
#include <vector>



template <typename T>
std::ostream &operator << (std::ostream &os, const std::vector<T> &vec) {
    for (int i = 0; i < vec.size(); ++i) {
        os << vec[i] << ' ';
    }
    os << std::endl;
    return os;
}

int main() {

    std::vector<int> vec{1, 2, 3, 4};
    int combinations_count = 0;

    std::sort(vec.begin(), vec.end()); 
    std::cout << vec << std::endl;

    while(std::next_permutation(vec.begin(), vec.end())) {
        std::cout << vec << std::endl;
        ++combinations_count;
    }

    std::cout << "combinations_count: " << combinations_count << std::endl;


    std::vector<int> vec2{1, 3, 6, 2, 5, 4, 0};
    std::cout << vec2 << std::endl; 
    std::nth_element(vec2.begin(), vec2.begin() + 3, vec2.end());
    std::cout << vec2 << std::endl; 

}