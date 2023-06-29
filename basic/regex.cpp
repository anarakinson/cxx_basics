#include <regex>
#include <string>
#include <iostream>


int main() {

    std::regex match_regex{R"(\w+@\w+\.(?:com|ru|ua|uk|su))"};

    // std::string input;
    // std::cin >> input;

    std::string input = "asdf@mail.com";

    std::string match_result = std::regex_match(input, match_regex) ? "Matched" : "Not matched";

    std::cout << match_result << std::endl;
    std::cout << std::endl;

    /*-------------------------------------*/
    
    const std::regex replace_regex{R"((\w+):(\w+);)"};
    std::smatch match;

    std::string input2 = "asdsf qwe:  asfd; dsf; asdf:qwret;; asdsfd:adsf; ;;";

    while (std::regex_search(input2, match, replace_regex)) {

        for (size_t i=0; i < match.size(); ++i) {
            std::cout << match[i] << std::endl;
        }
        std::cout << match.prefix().str() << std::endl;
        std::cout << match.suffix().str() << std::endl;

        input2 = match.suffix().str();
        std::cout << std::endl;

    }

    /*-------------------------------------*/

}