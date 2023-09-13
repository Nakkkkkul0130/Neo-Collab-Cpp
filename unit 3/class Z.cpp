#include <iostream>

class Z {
public:
    Z() {
        std::cout << "Constructor called" << std::endl;
    }

    ~Z() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;

    Z* zObjects = new Z[n];  // Create an array of n Z objects

    delete[] zObjects;  // Deallocate the memory for the array of Z objects

    return 0;
}

