#include <iostream>
#include <string>
#include <cctype>
#include <limits> // Include the <limits> header

void* checkBookAvailability(float price, char availability) {
    if (price > 0 && price < 2500.50 && (availability == 'Y' || availability == 'y')) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}

int main() {
    float price;
    char availability;

    // Input price
    std::cin >> price;

    // Input availability (as a single character)
    std::cin >> availability;

    // Clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Convert the availability character to lowercase
    availability = std::tolower(availability);

    // Check if availability is a valid character (y or n)
    if (availability != 'y' && availability != 'n') {
        std::cout << "No" << std::endl;
        return 0;
    }

    checkBookAvailability(price, availability);

    return 0;
}
