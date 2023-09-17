#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int inum;
    float dnum;
    string str;

    // Read inputs
    cin >> inum >> dnum;
    cin.ignore();  // Consume the newline character left in the buffer
    getline(cin, str);

    // Write to the file "test.txt"
    ofstream outFile("test.txt");

    if (!outFile) {
        cout << "Cannot open file." << endl;
        return 1;
    }

    outFile << inum << " " << dnum << " " << str;
    outFile.close();

    // Read from the file "test.txt" and calculate the sum
    ifstream inFile("test.txt");

    if (!inFile) {
        cout << "Cannot open file." << endl;
        return 1;
    }

    inFile >> inum >> dnum;
    inFile.ignore(); // Consume the space
    getline(inFile, str);
    inFile.close();

    // Calculate the sum of integer and float values
    float sum = static_cast<float>(inum) + dnum;

    // Print the values and the sum
    cout << inum << " " << dnum << endl;
    cout << str << endl;
    cout << "Sum of integer and float: " << sum << endl;

    return 0;
}
