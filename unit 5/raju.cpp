#include <iostream>
#include <cstring>

char* reverseString(const char* input) {
    int length = strlen(input);
    char* reversed = new char[length + 1];

    for (int i = 0; i < length; i++) {
        reversed[i] = input[length - i - 1];
    }

    reversed[length] = '\0';
    return reversed;
}

int main() {
    char input[1001]; 
    std::cin.getline(input, sizeof(input));

    char* reversed = reverseString(input);

    std::cout << "Reversed string: " << reversed << std::endl;

    delete[] reversed; 

    return 0;
}

