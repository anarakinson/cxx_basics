#include <iostream>

using namespace std;

int main() {
  // put your code here
    int x;
    cin >> x;
    for (int i=10; i<1000000; i*=10) {
        cout << x % i / (i / 10);
    }
    return 0;
}
