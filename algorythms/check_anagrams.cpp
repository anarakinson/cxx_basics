#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

map<char, int> GetLettersMap(const string &str) {
    map<char, int> result_map;
    for (const char &c : str) {
        ++result_map[c];
    }
    return result_map;
}

bool CheckAnagram(const string& s1, const string& s2) {
    map<char, int> letters1 = GetLettersMap(s1);
    map<char, int> letters2 = GetLettersMap(s2);
    return (letters1 == letters2);
}

// напишем небольшую функцию для проверки
void CheckIsTrue(bool value) {
    if (value) {
        cout << "Test passed :)"s << endl;
    } else {
        cout << "Test failed :("s << endl;
    }
}

int main() {
    CheckIsTrue(CheckAnagram("tea"s, "eat"s));
    CheckIsTrue(!CheckAnagram("battle"s, "beatle"s));
    CheckIsTrue(!CheckAnagram("lift"s, "elevator"s));
    CheckIsTrue(CheckAnagram("ocean"s, "canoe"s));
}
