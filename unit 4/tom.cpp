#include <iostream>

class TimeConverter {
private:
    int hours;
    int minutes;

public:
    TimeConverter(int h = 0, int m = 0) : hours(h), minutes(m) {}

    operator int() {
        return hours * 60 + minutes;
    }
};

int main() {
    int hours, minutes;
    
    std::cin >> hours >> minutes;
    
    TimeConverter time(hours, minutes);
    
    int totalMinutes = static_cast<int>(time);
    
    std::cout << totalMinutes << " mins" << std::endl;

    return 0;
}

