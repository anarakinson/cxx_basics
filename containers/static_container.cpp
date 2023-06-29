#include <iostream> 


template <typename T, size_t N>
class StaticContainer {
public:
    StaticContainer(): last_{0} {}

    bool push_back(const T &value) {
        if (last_ >= N) {
            // No free space to add one more element
            return false;
        }
        data_[last_] = value;  // add value to container
        ++last_;
        return true;
    }

    bool get(const size_t pos, T &out) const {
        if (pos >= last_) {
            // invalid value
            return false;
        }
        out = data_[pos];
        return true;
    }

    bool erase(const size_t pos) {
        if (pos >= last_) {
            // invalid value
            return false;
        }
		// need to move all element after 'pos' to one position to the left
        for (size_t i = pos; i < last_; ++i) {
            data_[i] = data_[i + 1];
        }
        --last_;
        return true;
    }

    T operator [] (int index) {
        if (index < 0 || index >= last_) {
            throw std::out_of_range("Container index out of range");
        }
        return data_[index];
    }  

    size_t count() const { return last_; }

private: 
    T data_[N];    // array to contain values
    size_t last_;  // size counter

};


template <typename T, size_t N>
void print_container(const StaticContainer<T, N> &container) {
	for (size_t i = 0; i < container.count(); ++i) {
		if (i != 0) { std::cout << ' '; }
		
		T value;
		container.get(i, value);
		std::cout << value;
	}
}

template <size_t N>
void print_container(const StaticContainer<const char *, N> &container) {
	for (size_t i = 0; i < container.count(); ++i) {
		if (i != 0 && i != N) { std::cout << ',' << ' '; }

		const char *value;
		container.get(i, value);
		std::cout << "\"" << value << "\"";
	}
}


void test_container_int() {
	StaticContainer<int, 5> int_container;

	int_container.push_back(0);
	int_container.push_back(1);
	int_container.push_back(2);
	int_container.push_back(3);
	int_container.push_back(4);

	print_container(int_container);
	std::cout << std::endl;

	int_container.erase(2);

	print_container(int_container);
	std::cout << std::endl;

    int x = int_container[2];
    std::cout << "x[2] = " << x << std::endl;

	std::cout << std::endl;
}

void test_container_str() {
	StaticContainer<const char *, 5> int_container;

	int_container.push_back("asd ");
	int_container.push_back(" fdfgf ");
	int_container.push_back(" sdfg sfd");

	print_container(int_container);
	std::cout << std::endl;

    const char *x = int_container[2];
    std::cout << "x[2] = " << x << std::endl;

	std::cout << std::endl;
}

int main() 
{
	test_container_int();
    test_container_str();

	return 0;
}