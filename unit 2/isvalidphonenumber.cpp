#include <iostream>
#include <string>
#include <cctype> // For isdigit function

using namespace std;

bool isValidPhoneNumber(const string& phoneNumber) {
    // Check if the string has the correct length (12 characters)
    if (phoneNumber.size() != 12) {
        return false;
    }

    // Check if the hyphens are in the correct positions
    if (phoneNumber[3] != '-' || phoneNumber[7] != '-') {
        return false;
    }

    // Check if all characters between hyphens are digits
    for (int i = 0; i < 12; i++) {
        if (i == 3 || i == 7) {
            continue; // Skip hyphens
        }
        if (!isdigit(phoneNumber[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string phoneNumber;
    cin >> phoneNumber;

    if (isValidPhoneNumber(phoneNumber)) {
        cout << "Yes, the phone number is valid." << endl;

        // Print the phone number without hyphens
        for (char c : phoneNumber) {
            if (isdigit(c)) {
                cout << c;
            }
        }
        cout << endl;
    } else {
        cout << "No, the phone number is not valid." << endl;
    }

    return 0;
}

