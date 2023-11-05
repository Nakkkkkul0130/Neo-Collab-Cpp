#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student {
private:
    string name;
    Student* friends[100];
    int numFriends;
public:
    Student(const string& studentName) : name(studentName), numFriends(0) {}
    string getName() const {
        return name;
    }
    void addFriend(Student* friendPtr) {
        if (numFriends < 100) {
            friends[numFriends] = friendPtr;
            numFriends++;
        } else {
            cout << "Cannot add more friends. Maximum limit reached." <<endl;
        }
    }
    void removeFriend(Student* friendPtr) {
        for (int i = 0; i < numFriends; i++) {
            if (friends[i] == friendPtr) {
                for (int j = i; j < numFriends - 1; j++) {
                    friends[j] = friends[j + 1];
                }
                numFriends--;
                break;
            }
        }
    }
    int getNumFriends() const {
        return numFriends;
    }
    static double getAverageFriends(Student* students[], int numStudents) {
        int totalFriends = 0;
        for (int i = 0; i < numStudents; i++) {
            totalFriends += students[i]->getNumFriends();
        }
        return static_cast<double>(totalFriends) / numStudents;
    }
};

int main() {
    int numStudents;
    cin >> numStudents;
    cin.ignore();
    Student* students[numStudents];
    string studentName;
    for (int i = 0; i < numStudents; i++) {
        getline(cin, studentName);
        students[i] = new Student(studentName);
    }
    int numFriends;
    int friendIndex;
    for (int i = 0; i < numStudents; i++) {
        cin >> numFriends;
        cin.ignore();

        for (int j = 0; j < numFriends; j++) {
            cin >> friendIndex;
            cin.ignore();
            if (friendIndex > 0 && friendIndex <= numStudents) {
                students[i]->addFriend(students[friendIndex - 1]);
            } else {
                cout << "Invalid friend index" <<endl;
                j--;
            }
        }
    }
    double averageFriends = Student::getAverageFriends(students, numStudents);
    cout << fixed << setprecision(2);
    cout << "Average number of friends among all students: " << averageFriends;
    for (int i = 0; i < numStudents; i++) {
        delete students[i];
    }
    return 0;
}

