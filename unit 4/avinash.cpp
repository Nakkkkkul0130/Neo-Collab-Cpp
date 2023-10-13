#include <iostream>
#include <iomanip>

class AcademicMarks {
public:
    double mark1;
    double mark2;

    AcademicMarks() : mark1(0.0), mark2(0.0) {}

    virtual void input() {
        std::cin >> mark1;
        std::cin >> mark2;
    }

    virtual void output() const {
        std::cout << "Mark 1: " << std::fixed << std::setprecision(1) << mark1 << std::endl;
        std::cout << "Mark 2: " << std::fixed << std::setprecision(1) << mark2 << std::endl;
    }
};

class SportsMarks {
public:
    double score;

    SportsMarks() : score(0.0) {}

    virtual void input() {
        std::cin >> score;
    }

    virtual void output() const {
        std::cout << "Score: " << std::fixed << std::setprecision(1) << score << std::endl;
    }
};

class Student : public AcademicMarks, public SportsMarks {
public:
    int studentID;

    Student() : studentID(0) {}

    void input() {
        std::cin >> studentID;
        AcademicMarks::input();
        SportsMarks::input();
    }

    void output() const {
        std::cout << "ID: " << studentID << std::endl;
        AcademicMarks::output();
        SportsMarks::output();
        double totalScore = mark1 + mark2 + score;
        std::cout << "Total score: " << std::fixed << std::setprecision(1) << totalScore << std::endl;
    }
};

int main() {
    Student student;
    student.input();
    
    if (student.mark1 < 0 || student.mark1 > 100) {
        std::cout << "Invalid mark 1. Only enter values between 0 and 100" << std::endl;
    } else if (student.mark2 < 0 || student.mark2 > 100) {
        std::cout << "Invalid mark 2. Only enter values between 0 and 100" << std::endl;
    } else if (student.score < 0 || student.score > 100) {
        std::cout << "Invalid score. Only enter values between 0 and 100" << std::endl;
    } else {
        student.output();
    }

    return 0;
}
