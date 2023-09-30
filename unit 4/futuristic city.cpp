#include <iostream>
#include <iomanip>

class Time
{
public:
    int hours;
    int minutes;

    Time(int h, int m) : hours(h), minutes(m) {}

    void operator--()
    {
        if (minutes == 0)
        {
            if (hours == 0)
            {
                std::cout << "Cannot decrement further. Time is already at 00:00." << std::endl;
                return;
            }
            hours--;
            minutes = 59;
        }
        else
        {
            minutes--;
        }
    }

    void display()
    {
        std::cout << std::setfill('0') << std::setw(1) << hours << ":" << std::setfill('0') << std::setw(2) << minutes;
    }
};

int main()
{
    int h, m;
    std::cin >> h >> m;

    Time currentTime(h, m);

    std::cout << "Time before decrement: ";
    currentTime.display();
    std::cout << std::endl;

    --currentTime;

    std::cout << "Time after decrement: ";
    currentTime.display();
    std::cout << std::endl;

    return 0;
}
