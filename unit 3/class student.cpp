#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int birthYear;

public:
    // Default constructor
    Student() : name("XYZ"), birthYear(2023) {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birthYear << std::endl;
    }

    // Parameterized constructor
    Student(const std::string& n, int year) : name(n), birthYear(year) {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birthYear << std::endl;
    }

    // Destructor
    ~Student() {
        // Destructor should be empty for this case
    }

    // Function to destroy the object and display the destruction message
    void destroy() {
        std::cout << "Destroyed object: " << name << std::endl;
        delete this;
    }
};

int main() {
    std::string name;
    int birthYear;

    // Create a default student object
    Student* defaultStudent = new Student;

    // Read student details
    std::cin >> name >> birthYear;

    // Create a student object with provided details
    Student* student = new Student(name, birthYear);

    // Destroy the student object with provided details and display the destruction message
    student->destroy();

    // End of program
    return 0;
}
