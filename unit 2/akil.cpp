#include <iostream>
#include <string>

using namespace std;

int main() {
    string initialString, appendString, insertString;
    int insertPosition, eraseStart, eraseCount;

    // Input the initial string
    getline(cin, initialString);

    // Input additional characters to append
    getline(cin, appendString);
    initialString += appendString;

    // Input characters to insert
    getline(cin, insertString);
    cin >> insertPosition;

    // Insert characters at the specified position
    initialString.insert(insertPosition, insertString);

    // Input starting position and number of characters to erase
    cin >> eraseStart >> eraseCount;

    // Erase characters from the specified position or within the specified range
    initialString.erase(eraseStart, eraseCount);

    // Output the modified string after each operation
    cout << "Modified string after append: " << initialString << endl;
    
    // Re-inserting the insertString
    initialString.insert(insertPosition, insertString);
    cout << "Modified string after insert: " << initialString << endl;

    // Erasing the specified range
    initialString.erase(eraseStart, eraseCount);
    cout << "Modified string after erase: " << initialString << endl;

    return 0;
}
