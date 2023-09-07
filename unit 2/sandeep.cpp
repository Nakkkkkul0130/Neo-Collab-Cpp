#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
};

int main() {
    Time workTime;
    cin >> workTime.hours >> workTime.minutes;

    int *ptr_hours = &workTime.hours;
    int *ptr_minutes = &workTime.minutes;

    int seconds = (*ptr_hours * 3600) + (*ptr_minutes * 60);

    cout << seconds << endl;

    return 0;
}

