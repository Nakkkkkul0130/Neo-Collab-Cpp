#include <iostream>
#include <fstream>

using namespace std;

class PrimeNumberFinder {
public:
    PrimeNumberFinder(int a, int b) : a(a), b(b) {}

    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }

        return true;
    }

    void findAndWritePrimesToFile() {
        if (a >= b || a <= 0 || b <= 0 || a > 1000 || b > 1000) {
            cout << "Invalid input!" << endl;
            return;
        }

        ofstream outFile("prime.txt");
        if (!outFile) {
            cout << "Error opening file for writing." << endl;
            return;
        }

        for (int i = a; i <= b; ++i) {
            if (isPrime(i)) {
                outFile << i << " ";
            }
        }

        outFile.close();

        ifstream inFile("prime.txt");
        if (!inFile) {
            cout << "Error opening file for reading." << endl;
            return;
        }

        int num;
        while (inFile >> num) {
            cout << num << " ";
        }

        inFile.close();
        cout << endl;
    }

private:
    int a, b;
};

int main() {
    int a, b;
    cin >> a >> b;

    PrimeNumberFinder finder(a, b);
    finder.findAndWritePrimesToFile();

    return 0;
}
