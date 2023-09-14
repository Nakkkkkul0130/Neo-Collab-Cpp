#include <iostream>
using namespace std;

class Euclids {
private:
    int num1;
    int num2;

public:
    void setData(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int computeGCD() {
        if (num1 <= 0 || num2 <= 0) {
            return 0;
        }

        while (num2 != 0) {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }

        return num1;
    }

    void display() {
        cout << num1 << " " << num2 << endl;
        int gcd = computeGCD();
        cout << gcd << endl;
    }
};

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    Euclids euclid;
    euclid.setData(num1, num2);
    euclid.display();

    return 0;
}
