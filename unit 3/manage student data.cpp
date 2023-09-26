#include <iostream>
#include <fstream>

using namespace std;

const int MAX_NAME_LENGTH = 30;

struct Student {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int marks[5];
};

int main() {
    Student student;

    // Input student data
    cin >> student.rollNumber;
    cin.ignore(); // Clear the newline character from the previous input
    cin.getline(student.name, MAX_NAME_LENGTH);
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
    }

    // Write student data to "student.txt"
    ofstream outFile("student.txt");
    outFile << student.rollNumber << endl;
    outFile << student.name << endl;
    for (int i = 0; i < 5; i++) {
        outFile << student.marks[i] << " ";
    }
    outFile.close();

    // Read and print student data from "student.txt"
    ifstream inFile("student.txt");
    inFile >> student.rollNumber;
    inFile.ignore(); // Clear the newline character from the previous input
    inFile.getline(student.name, MAX_NAME_LENGTH);
    for (int i = 0; i < 5; i++) {
        inFile >> student.marks[i];
    }

    cout << student.rollNumber << endl;
    cout << student.name << endl;
    for (int i = 0; i < 5; i++) {
        cout << student.marks[i] << " ";
    }
    cout << endl;

    return 0;
}
