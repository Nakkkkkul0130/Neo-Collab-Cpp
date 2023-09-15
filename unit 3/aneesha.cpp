#include <iostream>

class Base {
private:
    int value;

public:
    // Parameterized constructor for Base class
    Base(int val) : value(val) {
        std::cout << "Base Class Constructor" << std::endl;
        std::cout << "Value set: " << value << std::endl;
    }
};

class InitializerList {
private:
    Base base;

public:
    // Constructor for InitializerList class, composing a Base object
    InitializerList(int val) : base(val) {
        std::cout << "InitilizerList's Constructor" << std::endl;
    }
};

int main() {
    int N;

    // Read an integer value from the user
    std::cin >> N;

    // Create an InitializerList object with the input value, showcasing composition
    InitializerList initializerList(N);

    return 0;
}
