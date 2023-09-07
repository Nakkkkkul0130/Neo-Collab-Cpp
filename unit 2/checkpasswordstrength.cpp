#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool containsUppercase(const string &str) {
    for (char ch : str) {
        if (isupper(ch)) {
            return true;
        }
    }
    return false;
}

bool containsLowercase(const string &str) {
    for (char ch : str) {
        if (islower(ch)) {
            return true;
        }
    }
    return false;
}

bool containsDigit(const string &str) {
    for (char ch : str) {
        if (isdigit(ch)) {
            return true;
        }
    }
    return false;
}

bool containsSpecialChar(const string &str) {
    for (char ch : str) {
        if (!isalnum(ch)) {
            return true;
        }
    }
    return false;
}

string checkPasswordStrength(const string &password) {
    int length = password.length();

    if (length < 6) {
        return "Weak";
    } else if (length >= 8 && containsUppercase(password) && containsLowercase(password) && containsDigit(password) && containsSpecialChar(password)) {
        return "Strong";
    } else if (length >= 6 && (containsUppercase(password) || containsLowercase(password)) && containsDigit(password)) {
        return "Medium";
    } else {
        return "Weak";
    }
}

int main() {
    string password;
    cin >> password;

    string strength = checkPasswordStrength(password);
    cout << strength << endl;

    return 0;
}
