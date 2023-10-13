#include <iostream>

class Rectangle {
public:
    double width;
    double length;

    Rectangle(double w, double l) : width(w), length(l) {}

    double calculateBaseArea() {
        return width * length;
    }

    ~Rectangle() {
        width = 0.0;
        length = 0.0;
    }
};

class Cube : public Rectangle {
public:
    double height;

    Cube(double w, double l, double h) : Rectangle(w, l), height(h) {}

    double calculateVolume() {
        return calculateBaseArea() * height;
    }

    ~Cube() {
        height = 0.0;
    }
};

int main() {
    double cubeWidth, cubeLength, cubeHeight;
    std::cin >> cubeWidth >> cubeLength >> cubeHeight;

    Cube cube(cubeWidth, cubeLength, cubeHeight);

    std::cout << "Width: " << cube.width << std::endl;
    std::cout << "Length: " << cube.length << std::endl;
    std::cout << "Height: " << cube.height << std::endl;
    std::cout << "Base area: " << cube.calculateBaseArea() << std::endl;
    std::cout << "Volume: " << cube.calculateVolume() << std::endl;

    return 0;
}
