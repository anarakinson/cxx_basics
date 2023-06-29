
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


int main() {

    std::string a = "hello";
    std::string b = "hello";
    std::string c = "hellow";
    std::string d = "a";
    std::string e = "z";

    std::cout << (a < b) << " " << (a == b) << " " << (a < c)  << " " << (a < d)  << " " << (a < e) << std::endl;    

    std::string str = "hello hello hellowww";

    size_t res = str.find("hel");

    std::cout << res << " " << str[res] << std::endl;

    if (res != std::string::npos) {
        str.replace(res, 3/*lenght of "HEL"*/, "HEL");
        // or:
        // str.replace(str.find("hel"), 3, "HEL");
    }

    std::cout << str << std::endl;

    /*--------------------*/
    decltype(str.begin()) iter;
    size_t position = 0;
    iter = std::find(str.begin(), str.end(), 'h');
    position = std::distance(str.begin(), iter);

    std::cout << position << " " << str[position] << std::endl;


    std::cout << "- Adjacent find begin" << std::endl;
	iter = std::adjacent_find(str.begin(), str.end());
	size_t pos = std::distance(str.begin(), iter);
	std::cout << "Position of the first symbol in an adjacent pair is: " << pos << "\n";
	std::cout << str.at(pos) << " " << str.at(pos + 1) << std::endl;
	std::cout << "- Adjacent find begin" << std::endl;


    /*---------------------*/

    // std::vector<int> vec{1, 2, 3, 4};
    
    // decltype(vec.cbegin()) vec_iter;

    // vec_iter = std::find(vec.cbegin(), vec.cend(), 2);
    // pos = std::distance(vec.cbegin(), vec_iter);

    // std::cout << pos << " " << vec[pos] << std::endl;

    std::vector<std::string> vec{"sadasd1", "dsa2", "asd3", "asd4"};
    
    decltype(vec.cbegin()) vec_iter;

    std::vector<std::string> matching_vars{"a", "dsa2", "asd3", "qwer"};

    for (auto matching_var : matching_vars) {
        vec_iter = std::find(vec.cbegin(), vec.cend(), matching_var);
        pos = std::distance(vec.cbegin(), vec_iter);

        if (vec_iter != vec.cend()) {
            std::cout << pos << " " << vec[pos] << std::endl;
        } else {
            std::cout << "no matching" << std::endl;
        }
    }

    /*--------------*/
    std::wstring wstr = L"превед hello";
    std::wcout << wstr << std::endl;

}