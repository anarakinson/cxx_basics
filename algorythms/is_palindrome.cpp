#include <iostream>

using namespace std;

bool is_palindrome(string str, int i) {
    if (i == str.size() / 2) return true;
    if (str[i] != str[str.size()-(i+1)]) return false;
    return is_palindrome(str, ++i);
}

int main() {
    string str;
    cout << "Input a word: "s;
    getline(cin, str);
    cout << is_palindrome(str, 0) << endl;
}
