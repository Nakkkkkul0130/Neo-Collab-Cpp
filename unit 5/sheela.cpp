#include <iostream>
using namespace std;

class SummationCalculator {
public:
    virtual int sum(int a[], int n) = 0;
};

class SimpleSummationCalculator : public SummationCalculator {
public:
    int sum(int a[], int n) override {
        int rem, sum2 = 0, sum1 = 0, i, digit;
        for (i = 0; i < n; i++) {
            while (a[i] != 0) {
                digit = a[i] % 10;
                sum1 += digit;
                a[i] /= 10;
            }
        }
        while (sum1 != 0) {
            rem = sum1 % 10;
            sum2 += rem;
            sum1 /= 10;
            if (sum2 > 9 && sum1 == 0) {
                sum1 = sum2;
                sum2 = 0;
            }
        }
        return sum2;
    }
};

int main() {
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    SimpleSummationCalculator calculator;
    int result = calculator.sum(a, n);
    cout << result << endl;

    return 0;
}
