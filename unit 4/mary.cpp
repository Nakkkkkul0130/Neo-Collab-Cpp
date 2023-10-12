#include <iostream>
#include <iomanip>

class DistConv {
private:
    double miles;

public:
    DistConv(int miles) {
        this->miles = miles;
    }

    DistConv(int kilometers, double meters) {
        this->miles = (kilometers + meters / 1000) / 1.609344;
    }

    operator double() {
        return miles;
    }

    double toKilometersAndMeters(int &kilometers) {
        double km = miles * 1.609344;
        kilometers = static_cast<int>(km);
        return (km - kilometers) * 1000;
    }
};

int main() {
    int miles, kilometers;
    
    std::cin >> miles;
    
    DistConv milesToKm(miles);
    
    int km;
    double meters = milesToKm.toKilometersAndMeters(km);
    
    std::cout << km << " kilometers and " << std::fixed << std::setprecision(2) << meters << " meters" << std::endl;

    std::cin >> kilometers >> meters;

    DistConv kmAndMeters(kilometers, meters);

    double convertedMiles = static_cast<double>(kmAndMeters);
    
    std::cout << std::fixed << std::setprecision(2) << convertedMiles << " miles" << std::endl;

    return 0;
}
