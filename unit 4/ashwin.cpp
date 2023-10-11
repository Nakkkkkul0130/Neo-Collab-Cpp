#include <iostream>
#include <iomanip>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
    }
    double decimal() {
        return (double)numerator / denominator;
    }
};

int main() {
    int n, d;
    cin >> n >> d;
    Fraction f(n, d);
    cout << "Fraction: " << n << "/" << d << " is equivalent to decimal: " << fixed << setprecision(2) << f.decimal() << endl;
    return 0;
}
