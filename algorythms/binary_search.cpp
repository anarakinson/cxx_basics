#include <iostream>
#include <vector>


int main() {

    std::vector<int> vec{1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 9, 10};
    int x;
    std::cin >> x;

    size_t counter = 0;

    auto begin = vec.begin();
    auto end = vec.end();    

    while (counter < 10) {
        ++counter;
        int point = std::distance(begin, end) / 2;
            
        if (*(begin + point) == x) {
            std::cout << *(begin + point) << " begin: " << *begin << " end: " << *end << std::endl;
            break;
        } else if (*(begin + point) > x) {
            end = begin + point;
        } else if (*(begin + point) < x) {
            begin = begin + point;
        }
    }

}



/*------------------------------------------------------------------------------------*/
// 
// #include <iostream>
// #include <list>


// template <typename T>
// typename std::list<T>::iterator operator + (typename std::list<T>::iterator &lhs, T rhs) {
//     for (int i = 0; i < rhs; ++i) {
//         ++lhs;
//         return lhs;
//     }
// }


// template <typename T>
// typename std::list<T>::iterator operator - (typename std::list<T>::iterator &lhs, T rhs) {
//     for (int i = 0; i < rhs; ++i) {
//         --lhs;
//         return lhs;
//     }
// }

// int main() {

//     std::list<int> vec{1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 9, 10};
//     int x = 4;

//     size_t counter = 0;

//     auto begin = vec.begin();
//     auto end = vec.end();    

//     while (counter < 10) {
//         ++counter;
//         int point = std::distance(begin, end) / 2;
//         std::cout << *(begin + point) << " begin: " << *begin << " end: " << *end << " " << point << std::endl;
            
//         if (*(begin + point) == x) {
//             std::cout << *(begin + point) << " begin: " << *begin << " end: " << *end << std::endl;
//             break;
//         } else if (*(begin + point) > x) {
//             std::cout << " >" << std::endl;
//             end = begin + point;
//         } else if (*(begin + point) < x) {
//             std::cout << " <" << std::endl;
//             begin = begin + point;
//         }
//     }

// }

