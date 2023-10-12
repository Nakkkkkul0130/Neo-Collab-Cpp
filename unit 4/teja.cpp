// You are using
#include <iostream>

class Parent {
public:
    void add(int num1, int num2) {
        std::cout << num1 + num2 << std::endl;
    }
};

class Child : public Parent {
public:
    void sub(int num1, int num2) {
        std::cout << num1 - num2 << std::endl;
    }
};

int main() {
    int integer1, integer2;
    std::cin >> integer1 >> integer2;

    Child child;
    child.add(integer1, integer2);
    child.sub(integer1, integer2);

    return 0;
}

