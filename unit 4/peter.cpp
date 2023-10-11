#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int s) {
        hours = s / 3600;
        minutes = (s % 3600) / 60;
        seconds = s % 60;
    }
    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int seconds;
    cin >> seconds;
    Time t(seconds);
    t.displayTime();
    return 0;
}
