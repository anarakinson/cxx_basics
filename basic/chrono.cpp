#include <iostream>
#include <chrono>
#include <cassert>


namespace chrono = std::chrono;


/*constexpr */ long double operator ""_deg_to_rad(long double deg) {
	const long double pi = 3.14159265358979323846;
	long double radians = deg * pi / 180;
	return radians;
}

int main() {

    assert(true); // 
    auto then = chrono::steady_clock::now();

    for (int i = 0; i < 1e+8; ++i) {
        i *= 2;
        i /= 2;
    }

    auto now = chrono::steady_clock::now();

    auto ms_dur = chrono::duration_cast<chrono::milliseconds>(now - then);
    auto ms = chrono::time_point_cast<chrono::milliseconds>(now);

    std::cout << ms.time_since_epoch().count() << std::endl;
    std::cout << ms_dur.count() << std::endl;

    int a = (2 < 0) ? 2 : -2;
    std::cout << a;

}