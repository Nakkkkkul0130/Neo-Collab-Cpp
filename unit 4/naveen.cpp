#include <iostream>
using namespace std;

class DateFormatConverter {
private:
    int month;
    int day;
    int year;
public:
    DateFormatConverter(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }
    void displayDate() {
        cout << day << "-" << month << "-" << year << endl;
    }
    friend ostream& operator<<(ostream& os, const DateFormatConverter& dt);
};

ostream& operator<<(ostream& os, const DateFormatConverter& dt) {
    os << dt.day << "-" << dt.month << "-" << dt.year;
    return os;
}

int main() {
    int month, day, year;
    cin >> month >> day >> year;
    DateFormatConverter date(month, day, year);
    cout << "Date in DD-MM-YYYY format: " << date << endl;
    return 0;
}
