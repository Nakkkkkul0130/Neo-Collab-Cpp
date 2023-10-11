#include <iostream>
#include <string>
using namespace std;

string repeatString(string s, int n) {
    string s1 = s;
    for (int i = 1; i < n; i++) {
        s += s1;
    }
    return s;
}

int main() {
    string str;
    int n;
    getline(cin, str);
    cin >> n;
    string result = repeatString(str, n);
    cout << "Result: " << result << endl;
    return 0;
}