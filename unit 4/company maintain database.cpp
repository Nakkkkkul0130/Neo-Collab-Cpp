#include <iostream>
#include <iomanip>

class Employee {
protected:
    int empId;
    float salary;

public:
    void input() {
        std::cin >> empId >> salary;
    }
};

class empLevel : public Employee {
public:
    void categorizeLevel() {
        if (salary > 100.0) {
            std::cout << "Employee ID: " << empId << std::endl;
            std::cout << "Salary: $" << std::fixed << std::setprecision(2) << salary << std::endl;
            std::cout << "Level: 1" << std::endl;
        } else {
            std::cout << "Employee ID: " << empId << std::endl;
            std::cout << "Salary: $" << std::fixed << std::setprecision(2) << salary << std::endl;
            std::cout << "Level: 2" << std::endl;
        }
    }
};

int main() {
    empLevel employee;
    employee.input();
    employee.categorizeLevel();

    return 0;
}

