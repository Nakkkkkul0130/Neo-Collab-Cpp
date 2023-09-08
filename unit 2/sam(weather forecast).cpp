#include <iostream>
#include <vector>
#include <string>

class WeatherForecast {
private:
    std::vector<std::pair<std::string, float>> locations;

public:
    void addLocation(std::string location, float temperature) {
        locations.push_back(std::make_pair(location, temperature));
    }

    std::string findColdestLocation() {
        if (locations.empty()) {
            return "No locations added.";
        }

        float minTemperature = locations[0].second;
        std::string coldestLocation = locations[0].first;

        for (const auto& loc : locations) {
            if (loc.second < minTemperature) {
                minTemperature = loc.second;
                coldestLocation = loc.first;
            }
        }

        return coldestLocation;
    }
};

int main() {
    int numLocations;
    std::cin >> numLocations;
    std::cin.ignore(); // Consume the newline character

    WeatherForecast forecast;

    for (int i = 0; i < numLocations; ++i) {
        std::string location;
        float temperature;
        std::getline(std::cin, location);
        std::cin >> temperature;
        std::cin.ignore(); // Consume the newline character

        forecast.addLocation(location, temperature);
    }

    std::string coldestLocation = forecast.findColdestLocation();

    std::cout << coldestLocation << std::endl;

    return 0;
}

