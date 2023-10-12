
#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& n, int birthYear, int currentYear)
        : name(n), birthYear(birthYear), currentYear(currentYear) {}

    void calculateAge() {
        age = currentYear - birthYear;
    }

    void displayAge() {
        std::cout << "Age: " << age << " years" << std::endl;
    }

private:
    std::string name;
    int birthYear;
    int currentYear;
    int age;
};

int main() {
    std::string name;
    int birthYear, currentYear;

    std::cin >> name >> birthYear >> currentYear;

    Person person(name, birthYear, currentYear);

    person.calculateAge();

    person.displayAge();

    return 0;
}
