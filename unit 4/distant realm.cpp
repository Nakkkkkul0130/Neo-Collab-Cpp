#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
    Time operator-(Time t) {
        int h, m, s;
        s = seconds - t.seconds;
        m = minutes - t.minutes;
        h = hours - t.hours;
        if (s < 0) {
            s += 60;
            m--;
        }
        if (m < 0) {
            m += 60;
            h--;
        }
        return Time(h, m, s);
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);
    cout << "Time 1: ";
    t1.displayTime();
    cout << "Time 2: ";
    t2.displayTime();
    Time diff = t1 - t2;
    cout << "Time difference: ";
    diff.displayTime();
    return 0;
}
