#include <iostream>
#include <string>

class Parent {
public:
    Parent() {
        std::cout << "Parent constructor" << std::endl;
    }

    ~Parent() {
        std::cout << "Parent destructor" << std::endl;
    }
};

class Child1 : public Parent {
public:
    int value;

    Child1(int v) : value(v) {
        std::cout << "Child1 constructor: " << value << std::endl;
    }

    ~Child1() {
        std::cout << "Child1 destructor" << std::endl;
    }
};

class Child2 : public Parent {
public:
    double value;

    Child2(double v) : value(v) {
        std::cout << "Child2 constructor: " << value << std::endl;
    }

    ~Child2() {
        std::cout << "Child2 destructor" << std::endl;
    }
};

class Child3 : public Parent {
public:
    std::string value;

    Child3(const std::string& v) : value(v) {
        std::cout << "Child3 constructor: " << value << std::endl;
    }

    ~Child3() {
        std::cout << "Child3 destructor" << std::endl;
    }
};

int main() {
    int intInput;
    double doubleInput;
    std::string stringInput;

    std::cin >> intInput >> doubleInput >> stringInput;

    Child1 child1(intInput);
    Child2 child2(doubleInput);
    Child3 child3(stringInput);

    return 0;
}
