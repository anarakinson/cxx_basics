#include <iostream>


class myClass {
public:
    myClass(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int x;
    bool state;

    void print(double z) {
        std::cout << x << " " << y << " " << z << std::endl;
    }

    void print_hello() {
        hello();
    }

protected:
    int y;

private:
    int z;
    void hello() {
        std::cout << "hello" << std::endl;
    }
    friend class Child;
};


class Child: public myClass {
public:
    Child(int input_x, int input_y):
        myClass(input_x, input_y) {
    }
    void set_y(int y) {
        this->y = y;
    }
    void get_y() {
        std::cout << y << std::endl;
    }
    void set_z(int input_z) {
        z = input_z;
    }
    void get_z() {
        std::cout << z << std::endl;
    }
};


int main() {

    myClass cl(2, 4);

    cl.x = 12;
    // cl.y = 4;
    cl.print(3);

    // cl.hello(); // compilation error
    cl.print_hello();

    Child ch{12, 14};

    ch.set_y(1344);
    ch.get_y();
    ch.set_z(444);
    ch.get_z();

    ch.print_hello();

}