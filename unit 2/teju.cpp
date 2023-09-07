#include <iostream>
#include <string>

using namespace std;

void concatenateStrings(string &result, const string &str1, const string &str2) {
    result = str1 + str2;
}

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;

    string result;
    concatenateStrings(result, str1, str2);

    cout << result << endl;

    return 0;
}

