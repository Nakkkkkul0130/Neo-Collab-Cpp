#include <iostream>
#include <iomanip>

class Wall {
private:
    float length;
    float height;

public:
    // Default constructor
    Wall() : length(0.0), height(0.0) {}

    // Method to set the length and height of the wall
    void setData(float l, float h) {
        length = l;
        height = h;
    }

    // Method to calculate the area of the wall
    float calculateArea() {
        return length * height;
    }
};

int main() {
    float length, height;
    std::cin >> length >> height;

    // Create a Wall object
    Wall wall;

    // Set the length and height of the wall
    wall.setData(length, height);

    // Calculate and display the area of the wall rounded to one decimal place
    std::cout << std::fixed << std::setprecision(1) << wall.calculateArea() << std::endl;

    return 0;
}

