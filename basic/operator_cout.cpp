#include <iostream>
#include <string>


class Person {
    public:
        std::string name;
        std::string surename;
        int age;

        static std::string note;
        static const int number = 13;
        static int num2;

        static void get_note() {
            std::cout << "note: " << note << std::endl;
        }

};

class Redneck : public Person {
    public:
        bool have_pickup = false;
};

int Person::num2 = 1222;
std::string Person::note = "pararam";


std::ostream& operator << (std::ostream& ostr, const Person& person) {
    
    ostr << "Name: " << person.name << " >> Age: " << person.age << " ";
    return ostr;

}

std::istream& operator >> (std::istream& istr, Person& person) {
    
    istr >> person.name >> person.surename >> person.age;
    return istr;

}

int main() {

    int a = 12;
    char s = 'd';

    (operator<<(std::cout, s)).operator<<(a);

    std::cout << std::endl;

    Person person;
    person.name = "Fuck";
    person.age = 123;

    // std::cin >> person;
    std::cout << person << std::endl;

    Person *p = &person;

    std::cout << p->surename << std::endl;
    std::cout << person.surename << std::endl;

    Person::get_note();
 
    std::cout << Person::note << std::endl;
    person.note = "abrakadabra";
    std::cout << Person::note << std::endl;

    Redneck billy;
    billy.have_pickup = true;
    billy.name = "Billy";
    billy.age = 14;

    std::cout << billy.name << std::endl;

}