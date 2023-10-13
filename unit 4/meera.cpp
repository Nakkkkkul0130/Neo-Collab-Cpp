#include <iostream>
#include <string>

class Device {
public:
    Device(const std::string& type) : deviceType(type) {
        std::cout << "Device Constructor: Initializing a " << type << std::endl;
    }

    ~Device() {
        std::cout << "Device Destructor: Destroying a " << deviceType << std::endl;
    }

private:
    std::string deviceType;
};


class Smartphone : public Device {
public:
    Smartphone(const std::string& brand) : Device("Smartphone"), brand(brand) {
        std::cout << "Smartphone Constructor: Setting up " << brand << " smartphone" << std::endl;
    }

    ~Smartphone() {
        std::cout << "Smartphone Destructor: Turning off " << brand << " smartphone" << std::endl;
    }

private:
    std::string brand;
};

class Laptop : public Device {
public:
    Laptop(const std::string& brand) : Device("Laptop"), brand(brand) {
        std::cout << "Laptop Constructor: Booting up " << brand << " laptop" << std::endl;
    }

    ~Laptop() {
        std::cout << "Laptop Destructor: Shutting down " << brand << " laptop" << std::endl;
    }

private:
    std::string brand;
};

int main() {
    std::string smartphoneBrand, laptopBrand;
    std::cin >> smartphoneBrand >> laptopBrand;

    Smartphone smartphone(smartphoneBrand);
    Laptop laptop(laptopBrand);

    return 0;
}
