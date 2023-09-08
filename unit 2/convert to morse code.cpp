#include <iostream>
#include <string>
#include <map>

std::map<char, std::string> morseCodeTable = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
    {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
    {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
    {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."}, {' ', "/"}
};

std::string convertToMorseCode(const std::string& sentence) {
    std::string morseCode;
    for (char c : sentence) {
        // Convert to uppercase
        char uppercaseChar = std::toupper(c);

        // Check if the character is in the Morse code table
        if (morseCodeTable.find(uppercaseChar) != morseCodeTable.end()) {
            morseCode += morseCodeTable[uppercaseChar] + " ";
        }
    }
    return morseCode;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string morseCode = convertToMorseCode(sentence);
    std::cout<< morseCode << std::endl;

    return 0;
}

