#include <iostream>
using namespace std;

class Parent {
protected:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
    virtual void fun() {
        cout << "Parent fun()" << endl;
    }
};

class Child : public Parent {
public:
    void fun() override {
        int digits[4];
        int temp = num;
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            digits[i] = temp % 10;
            temp /= 10;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                sum += digits[i] + digits[j];
            }
        }
        cout << sum << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Child c;
    c.setNum(n);
    c.fun();
    return 0;
}