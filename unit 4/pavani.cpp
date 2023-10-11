#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }
    void displayDistance() {
        cout << feet << "'" << inches << endl;
    }
    Distance operator-() {
        feet--;
        inches--;
        return Distance(feet, inches);
    }
};

int main() {
    int feet, inches;
    cin >> feet >> inches;
    Distance d1(feet, inches);
    -d1;
    d1.displayDistance();
    return 0;
}