#include <iostream>
#include <string>

class Vehicle {
public:
    std::string brand;

    virtual void input() {
        std::cin >> brand;
    }

    virtual void output() const {
        std::cout << "Brand: " << brand << std::endl;
    }
};

class Car : public Vehicle {
public:
    int numDoors;

    void input() {
        Vehicle::input();
        std::cin >> numDoors;
    }

    void output() const {
        Vehicle::output();
        std::cout << "Number of Doors: " << numDoors << std::endl;
    }
};

class Bicycle : public Vehicle {
public:
    int numGears;

    void input() {
        Vehicle::input();
        std::cin >> numGears;
    }

    void output() const {
        Vehicle::output();
        std::cout << "Number of Gears: " << numGears << std::endl;
    }
};

int main() {
    Car car;
    Bicycle bicycle;

    car.input();
    bicycle.input();

    car.output();
    bicycle.output();

    return 0;
}
