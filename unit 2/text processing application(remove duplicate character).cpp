#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    // Create an empty string to store the result
    string result = "";

    // Iterate through each character in the input string
    for (char c : input) {
        // Check if the character is not already in the result string
        if (result.find(c) == string::npos) {
            // If not found, append it to the result string
            result += c;
        }
    }

    // Print the modified string without duplicate characters
    cout << result << endl;

    return 0;
}

