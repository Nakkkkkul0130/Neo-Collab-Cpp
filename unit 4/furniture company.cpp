#include <iostream>
#include <iomanip>
#include <string>

class Furniture {
protected:
    double price;
    std::string material;

public:
    Furniture(double price, const std::string& material)
        : price(price), material(material) {
    }

    void displayInfo() {
        std::cout << "Price: $"<< price << std::endl;
        std::cout << "Material: " << material << std::endl;
    }
};

class RecliningChair : virtual public Furniture {
protected:
    bool isElectric;

public:
    RecliningChair(double price, const std::string& material, bool isElectric)
        : Furniture(price, material), isElectric(isElectric) {
    }

    void displayInfo() {
        Furniture::displayInfo();
        std::cout << "Chair Type: " << (isElectric ? "Electric" : "Standard") << std::endl;
    }
};

class LightedBookshelf : virtual public Furniture {
protected:
    int numLights;

public:
    LightedBookshelf(double price, const std::string& material, int numLights)
        : Furniture(price, material), numLights(numLights) {
    }

    void displayInfo() {
        Furniture::displayInfo();
        std::cout << "Number of Shelves: " << numLights << std::endl;
    }
};

int main() {
    double price;
    std::string material;
    char type;

    std::cin >> price >> material >> type;

    if (type == 'C') {
        bool isElectric;
        std::cin >> isElectric;
        RecliningChair chair(price, material, isElectric);
        chair.displayInfo();
    } else if (type == 'T') {
        Furniture chair(price, material);
        chair.displayInfo();
    } else if (type == 'B') {
        int numLights;
        std::cin >> numLights;
        LightedBookshelf bookshelf(price, material, numLights);
bookshelf.displayInfo();
    } else {
        std::cout << "Invalid type!" << std::endl;
    }

    return 0;
}
