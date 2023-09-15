#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    int roll;
    string name;
    double fee;

public:
    Student(int roll, const string& name, double fee) {
        this->roll = roll;
        this->name = name;
        this->fee = fee;
    }
    Student(const Student& other) {
        roll = other.roll;
        name = other.name;
        fee = other.fee;
    }

    void display() const {
        cout << roll << " " << name << " " << fixed << setprecision(2) << fee << endl;
    }
};

int main() {
    int roll;
    string name;
    double fee;

    cin >> roll;
    cin.ignore(); 
    getline(cin, name);
    cin >> fee;

    Student student(roll, name, fee);
    cout << "Student Details:" << endl;
    student.display();

    Student copiedStudent(student);

    cout << "Copied Student Details:" << endl;
    copiedStudent.display();

    return 0;
}
