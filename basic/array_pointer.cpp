#include <iostream>

// void test(int **arr) {
//     std::cout << arr[0] << std::endl;
//     std::cout << arr[1] << std::endl;
//     std::cout << arr[2] << std::endl;
//     std::cout << arr[3] << std::endl;
//     std::cout << arr[4] << std::endl;
//     std::cout << arr[5] << std::endl;
// }

// int main() {
//     int x[3][3];
//     // int *y = &x;
//     test(x);
// }


template <size_t R, size_t C>
void func(double (&arr)[R][C])
{
    printf("%p\n", &arr);
    printf("%dx%d\n", R, C);
}

int main()
{
    double a1[10][10];
    double a2[5][5];

    printf("%p\n%p\n\n", &a1, &a2);
    func(a1);
    func(a2);

    return 0;
}