#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    ofstream file("sample.txt", ios::app);
    if (file.is_open()) {
        file << "Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils " << input;
        file.close();
        cout << "Data appended successfully" << endl;
    } else {
        cout << "Unable to open the file." << endl;
        return 0;
    }

    ifstream readFile("sample.txt");
    if (readFile.is_open()) {
        string content;
        while (readFile >> content) {
            cout << content << " ";
        }
        cout << endl;
        readFile.close();
    } else {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}
