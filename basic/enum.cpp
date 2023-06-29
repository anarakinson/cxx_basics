#include <iostream>
#include <string>


enum class State {
    Stay = 1,
    Run = 2, 
    Fly = 3,
    NotExists = 10,
};


class Exemplar {
public:
    Exemplar(State init_state):
        state{init_state} {}

    State get_state() const { // const method
        // this->state = State::NotExists; // error
        return this->state;
    }

    bool set_state(const State& state) {
        this->state = state;
        return true;
    }

private:
    State state{State::NotExists}; // set default state (if not initialized)
    
};

void show_state(State state) {
    switch (state) {
    case (State::Stay):
        std::cout << "stay" << std::endl;
        break;
    case (State::Run):
        std::cout << "run" << std::endl;
        break;
    case (State::Fly):
        std::cout << "fly" << std::endl;
        break;
    default:
        std::cout << "???" << std::endl;
    }
}

void print_current_state(const Exemplar& exemplar) { // use only const methods
    
    State state = exemplar.get_state();
    show_state(state);

}


int main() {

    // Exemplar ex;  // - not compiling
    Exemplar ex{State::Stay};

    std::cout << "Current state: ";
    show_state(ex.get_state());

    ex.set_state(State::Run);
    std::cout << "New current state: ";
    show_state(ex.get_state());
    
    std::cout << "State::fly: ";
    show_state(State::Fly);
    
    std::cout << "Else state: ";
    show_state(State::NotExists);

    // show_state(2); //    error
    // show_state(0); //    error

    print_current_state(ex);

}