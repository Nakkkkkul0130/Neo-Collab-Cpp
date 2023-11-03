#include <iostream>
#include <iomanip>

int getDayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int century = year / 100;
    year %= 100;
    int dayOfWeek = (day + (13 * (month + 1)) / 5 + year + year / 4 + century / 4 + 5 * century) % 7;
    return (dayOfWeek + 5) % 7;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && isLeapYear(year)) ? 29 : daysInMonth[month];
}

int main() {
    int month, year;

    std::cin >> month;
    std::cin >> year;

    if (month < 1 || month > 12 || year < 0) {
        std::cout << "Invalid input. Please enter a valid month (1-12) and year." << std::endl;
        return 0;
    }

    int daysInMonth = getDaysInMonth(month, year);

    int startDayOfWeek = getDayOfWeek(year, month, 1);

    int** calendar = new int*[6];
    for (int i = 0; i < 6; i++) {
        calendar[i] = new int[7];
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            calendar[i][j] = 0;
        }
    }

    int currentDay = 1;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if ((i == 0 && j < startDayOfWeek) || currentDay > daysInMonth) {
                continue;
            }
            calendar[i][j] = currentDay;
            currentDay++;
        }
    }

    std::cout << "=========================" << std::endl;
    std::cout << "    " << month << "/" << year << " Calendar    " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "Mon Tue Wed Thu Fri Sat Sun" << std::endl;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (calendar[i][j] == 0) {
                std::cout << "    ";
            } else {
                std::cout << std::setw(4) << calendar[i][j];
            }
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 6; i++) {
        delete[] calendar[i];
    }
    delete[] calendar;

    return 0;
}

