#include <iostream>
#include <math.h>

using namespace std;

int fibonacci(int n) {
    int a = 1, b = 0, res = 0;
    for (int i = 0; i < (n - 1); ++i) {
        res = a + b;
        b = a;
        a = res;
    }
    return res;
}

double fibonacci_math(double n) {
    double a = pow((1 + sqrt(5)) / 2, n);
    double b = pow((1 - sqrt(5)) / 2, n);
    double res = (a - b) / sqrt(5);
    // cout << a << " " << b << endl;
    return res;
}

int main() {
    int x;
    cin >> x;

    cout << fibonacci(x) << endl;
    cout << fibonacci_math(x) << endl;
}
