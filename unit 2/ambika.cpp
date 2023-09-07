#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    void updateAge(int newAge) {
        age = newAge;
    }
};

int main() {
    string name;
    int currentAge, newAge;

    // Input student name, current age, and new age
    cin >> name;
    cin >> currentAge;
    cin >> newAge;

    // Create a Student object with the provided name and current age
    Student student(name, currentAge);

    // Print the current age
    cout << "Current age: " << student.age << endl;

    // Update the age using a pointer to a data member
    student.updateAge(newAge);

    // Print the updated age
    cout << "Updated age: " << student.age << endl;

    return 0;
}

