#include <iostream>
#include <iomanip>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor with default arguments
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Display the time in 24-hour format with leading zeros
    void displayTime() const {
        std::cout << std::setfill('0') << std::setw(2) << hours << ":"
                  << std::setfill('0') << std::setw(2) << minutes << ":"
                  << std::setfill('0') << std::setw(2) << seconds << std::endl;
    }
};

int main() {
    int h, m, s;

    // Read the input time values
    std::cin >> h >> m >> s;

    // Create a Clock object with the input values
    Clock time(h, m, s);

    // Display the time in the specified format
    time.displayTime();

    return 0;
}

