#include <iostream>

class Vehicle {
public:
    float distance;
    float time;

    void getData() {
        std::cin >> distance >> time;
    }
};

class Car : public Vehicle {
public:
    void calculateSpeed() {
        if (time != 0) {
            float speed = distance / time;
            std::cout << "Speed of car: " << speed << " km/hr" << std::endl;
        } else {
            std::cerr << "Error: Time cannot be zero!" << std::endl;
        }
    }
};

int main() {
    Car car;
    car.getData();
    car.calculateSpeed();
    return 0;
}
