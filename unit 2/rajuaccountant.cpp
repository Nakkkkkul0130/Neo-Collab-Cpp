#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    double ratePerHour;
    int hoursWorked;

    Employee() {} // Default constructor

    Employee(const string& n, double rate, int hours) : name(n), ratePerHour(rate), hoursWorked(hours) {}

    double calculateSalary() {
        double regularSalary = ratePerHour * hoursWorked;
        double overtimeSalary = 0.0;

        if (hoursWorked > 40) {
            overtimeSalary = (ratePerHour * 1.5) * (hoursWorked - 40);
        }

        return regularSalary + overtimeSalary;
    }
};

int main() {
    int n;
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        string name;
        double rate;
        int hours;
        cin >> name >> rate >> hours;
        employees[i] = Employee(name, rate, hours);
    }

    cout << "Employee Information:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Employee Name: " << employees[i].name << endl;
        cout << "Salary: " << employees[i].calculateSalary() << endl;
    }

    return 0;
}
