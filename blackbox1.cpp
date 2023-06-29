#include <iostream>
#include <vector>

using namespace std;

int pow(int a, int b) {
    int out = 1;
    for (int i=0; i<b; ++i) {
        out *= a;
    }
    return out;
}

int main() {
    vector <int> v;
    int x, temp;

    cin >> x;

    for (int i=0; i<5; i++) {
        temp = x % pow(10, i + 1) / pow(10, i);
        v.push_back(temp);
    }

    cout << v[0] + v[2] + v[4] << " " << v[1] + v[3];

  return 0;
}
