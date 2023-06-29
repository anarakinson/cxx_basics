#include <iostream>

using namespace std;

unsigned long long int factorial(int n) {
    return (n == 1 || n <= 0) ? 1 : factorial(n-1) * n;
}

unsigned long long int factorial_loop(int n) {
    unsigned long long int res = 1;
    for (int i=1; i<=n; ++i){
        res *= i;
    }
    return res;
}

int main() {
    int x;
    cout << "input x: "s;
    cin >> x;
    cout << factorial(x) << endl;
    cout << factorial_loop(x) << endl;
}
