#include <iostream>


class C {
public:
    explicit C(float i): m_i{i} {}

    operator float() const { return m_i; }

    C &operator += (float i) { 
        m_i += i;
        return *this; 
    } 
    C &operator ++ () {  // postfix
        this->m_i++; 
        return *this;
    } 
    C operator ++ (int) { //prefix
        ++this->m_i;
        return *this;
    } 

    float i() { return m_i; }

private:
    float m_i;
};

C operator + (C c1, C c2) {
    return C{c1.i() + c2.i()};
}


std::ostream &operator << (std::ostream &os, C c) {
    os << "value: " << c.i();
    return os;
}


int main(int argc, char *argv[]) {

    C c{1.2};
    C c2{2.1234};
    c2 += 2;
    c++;
    ++c;

    C c3 = c + c2;
    std::cout << c3 << std::endl;

}