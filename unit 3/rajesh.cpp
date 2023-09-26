#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    // Read the list of integers
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<int> evenNumbers;
    vector<int> oddNumbers;

    // Separate even and odd numbers
    for (int i = 0; i < n; ++i) {
        if (numbers[i] % 2 == 0) {
            evenNumbers.push_back(numbers[i]);
        } else {
            oddNumbers.push_back(numbers[i]);
        }
    }

    // Write even numbers to "even.txt"
    ofstream evenFile("even.txt");
    for (int i = 0; i < evenNumbers.size(); ++i) {
        evenFile << evenNumbers[i] << " ";
    }
    evenFile.close();

    // Write odd numbers to "odd.txt"
    ofstream oddFile("odd.txt");
    for (int i = 0; i < oddNumbers.size(); ++i) {
        oddFile << oddNumbers[i] << " ";
    }
    oddFile.close();

    // Display even and odd numbers
    for (int i = 0; i < evenNumbers.size(); ++i) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < oddNumbers.size(); ++i) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}