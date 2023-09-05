#include <iostream>
#include <cctype> 
using namespace std;
int countVowels(const char* sentence) {
    int count = 0;
    while (*sentence) {
        char ch = tolower(*sentence);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        sentence++;
    }
    return count;
}

int main() {
    const int max = 1000;
    char sentence[max];
    cin.getline(sentence, max);
    int vowelCount = countVowels(sentence);
    cout << vowelCount << endl;

    return 0;
}