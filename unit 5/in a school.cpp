#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::string** studentNames = new std::string*[N];

    for (int i = 0; i < N; i++) {
        studentNames[i] = new std::string;
        std::cin >> *studentNames[i];
    }

    std::sort(studentNames, studentNames + N, [](const std::string* a, const std::string* b) {
        return *a < *b;
    });

    for (int i = 0; i < N; i++) {
        std::cout << *studentNames[i] << " ";
    }

    for (int i = 0; i < N; i++) {
        delete studentNames[i];
    }
    delete[] studentNames;

    return 0;
}
