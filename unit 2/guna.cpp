#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int roll_number;
    vector<int> marks;

    Student(string n, int r, vector<int> m) {
        name = n;
        roll_number = r;
        marks = m;
    }

    int calculateTotalMarks() const {
        int total = 0;
        for (int mark : marks) {
            total += mark;
        }
        return total;
    }

    void generateReportCard() const {
        int totalMarks = calculateTotalMarks();
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Student> students;

    for (int i = 0; i < n; i++) {
        string name;
        int roll_number;
        vector<int> marks(5);

        cin >> name >> roll_number;
        for (int j = 0; j < 5; j++) {
            cin >> marks[j];
        }

        const Student student(name, roll_number, marks); // Make the student object const
        students.push_back(student);
    }

    cout << "Student Report Cards:" << endl;
    for (const Student &student : students) {
        student.generateReportCard(); // Pass the const student object
    }

    return 0;
}
