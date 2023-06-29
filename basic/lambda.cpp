#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>


int main() {

    int a = 13;
    int j = -5;
    for (int i = 0; i < 10; ++i) {
    
        int res = [&](int x, int &y) { 
            --y;
            ++j;
            return x - (y * j); 
        } (i, a);
        std::cout << a << ' ' << res << std::endl;

    }


    /*----------------------------------------------------------*/
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "all of > 0: " << all_of(vec.begin(), vec.end(), [](int x) { return x > 0; }) << std::endl;
    std::cout << "none of > 0: " << none_of(vec.begin(), vec.end(), [](int x) { return x > 0; }) << std::endl;
    std::cout << "any of even: " << any_of(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }) << std::endl;
    std::cout << "all of even: " << all_of(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }) << std::endl;
    std::cout << "Number of even: " << std::count_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }) << std::endl;


    /*----------------------------------------------------------*/
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    auto iter = std::begin(arr);
    std::advance(iter, 5);
    std::for_each(std::begin(arr), iter, [](int &x) { x++; });
    std::for_each_n(iter, 5, [](int &x) { x--; });
    // std::remove(std::begin(arr), std::end(arr), 5);

    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "\nNumber of '6': " << std::count(std::begin(arr), std::end(arr), 6) << std::endl;


    /*----------------------------------------------------------*/
    const char str[] = "hello lol";
    // std::string str = "hello lol";
    std::cout << "Number of 'l': " << std::count(std::begin(str), std::end(str), 'l') << std::endl;
    std::cout << "Number of 'o': " << std::count_if(std::begin(str), std::end(str), [](int x) { return (x == 'o'); }) << std::endl;


    /*----------------------------------------------------------*/
    std::list lst{1, 2, 3, 4, 5, 6, 7, 8};
    std::list<int> lst2{1, 2, 3, 4, 5, 6, 7};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "lst == vec: " << std::equal(vec.begin(), vec.end(), lst.begin()) << std::endl;
    std::cout << "arr2 == vec: " << std::equal(vec.begin(), vec.end(), std::begin(arr2)) << std::endl;
    std::cout << "arr1 == vec: " << std::equal(vec.begin(), vec.end(), std::begin(arr)) << std::endl;
    // std::cout << "lst1 == lst2: " << std::equal(lst.begin(), lst.end(), lst2.begin()) << std::endl; // error

    auto lst_iter = std::remove_if(std::begin(lst), std::end(lst), [](int x) { return x % 2 == 0; });
    lst.erase(lst_iter, lst.end());
    
    // for (int i = 0; i < lst.size(); ++i) {
    //     std::cout << lst[i] << ' ';
    // } 
    for (const int &val : lst) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;


    /*----------------------------------------------------------*/
    std::vector<std::string> strings {
        "qwerty",
        "asdf",
        "zxc",
        "ghdjnfjgjnd"
    };

    std::vector<size_t> sizes;
    sizes.resize(strings.size());

    // std::transform(strings.cbegin(), strings.cend(), std::back_inserter(sizes), [](const std::string &str) { return str.size(); });
    std::transform(strings.cbegin(), strings.cend(), std::begin(sizes), [](const std::string &str) { return str.size(); });

    for (const size_t &val : sizes) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;


    /*----------------------------------------------------------*/
    std::vector<int> vec2{1, 1, 2, 3, 2, 1, 1, 2, 3, 4, 4, 3, 2, 1, 2, 3, 4, 5, 3, 3, 2, 1};
    std::sort(vec2.begin(), vec2.end());
    auto unique_iter = std::unique(vec2.begin(), vec2.end());
    vec2.erase(unique_iter, vec2.end());

    for (const int &val : vec2) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    std::rotate(vec2.begin(), vec2.begin() + 2, vec2.end());
    for (const int &val : vec2) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;


}