#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    string employeeName;
    string employeeID;
    double monthlySalary;

public:
    Employee() {}

    Employee(const string& name, const string& id, double salary)
        : employeeName(name), employeeID(id), monthlySalary(salary) {}

    double calculateAnnualSalary() const {
        return monthlySalary * 12;
    }

    void giveRaise(double percentage) {
        monthlySalary += monthlySalary * (percentage / 100);
    }

    void displayEmployeeDetails() const {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Monthly Salary: $" << fixed << setprecision(2) << monthlySalary << endl;
        cout << "Annual Salary: $" << fixed << setprecision(2) << calculateAnnualSalary() << endl;
    }
};

int main() {
    string name, id;
    double monthlySalary;
    getline(cin, name);
    getline(cin, id);
    cin >> monthlySalary;
    Employee emp(name, id, monthlySalary);
    emp.displayEmployeeDetails();
    double raisePercentage;
    cin >> raisePercentage;
    emp.giveRaise(raisePercentage);
    emp.displayEmployeeDetails();
    return 0;
}
