#include <iostream>
#include <cstring>

int main() {
    char *dynamicString = nullptr; 
    int currentSize = 0; 
    int maxSize = 10; 
    dynamicString = new char[maxSize]; 

    char input;
    std::cin >> std::noskipws; 
    while (true) {
        std::cin >> input;
        if (input == '0') {
            break; 
        }

        if (currentSize == maxSize - 1) { 
            maxSize *= 2; 
            char *newDynamicString = new char[maxSize];
            std::strcpy(newDynamicString, dynamicString);
            delete[] dynamicString; 
            dynamicString = newDynamicString;
        }

        dynamicString[currentSize] = input;
        currentSize++;
    }

    dynamicString[currentSize] = '\0'; 

    std::cout << "Dynamic String: " << dynamicString << std::endl;
    std::cout << "String Length: " << currentSize << std::endl;

    delete[] dynamicString;
    return 0;
}
