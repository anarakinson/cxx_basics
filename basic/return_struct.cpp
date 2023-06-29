#include <iostream>
#include <string>

using namespace std;

struct retStr {
    int i;
    string str;
};

retStr GetRes(string words) {
    retStr res;
    res.str = words;
    res.i = words.size();
    return res;
}

int main() {
    string s = "asdf";
    retStr r = GetRes(s);
    cout << r.i << " " << r.str << endl;
}
