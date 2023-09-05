#include <iostream>
#include <cctype>
using namespace std;
void checkInteger(void* ptr) {
    int num = *reinterpret_cast<int*>(ptr);

    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

void checkCharacter(void* ptr) {
    char ch = *reinterpret_cast<char*>(ptr);

    if (isalpha(ch)) {
        cout << "The character is an alphabet." << endl;
    } else if (isdigit(ch)) {
        cout << "The character is a number." << endl;
    } else {
        cout << "The character is not a number or an alphabet." << endl;
    }
}

int main() {
    int num;
    char ch;
    cin >> num;
    cin >> ch;
    void* intPtr = &num;
    void* charPtr = &ch;
    checkInteger(intPtr);
    checkCharacter(charPtr);

    return 0;
}