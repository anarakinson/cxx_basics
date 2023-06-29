#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <string> v = {"asd"s, "sda"s, "sad"s};
    for (string el : v) {
        cout << el << " "s;
    }
    cout << endl;
    // cout << v.begin() << endl;
    v.insert(v.begin(), "das"s);
    v.push_back("sas"s)
    for (string el : v) {
        cout << el << " "s;
    }
    cout << endl;
}
