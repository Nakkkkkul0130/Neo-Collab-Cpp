#include <iostream>
#include <fstream>
#include <cstdlib> // For exit()

int main() {
    int N;
    std::cin >> N;

    std::ofstream outFile("numbers.txt");

    if (!outFile) {
        std::cerr << "Error while setting up the data" << std::endl;
        return 1; // Return an error code
    }

    // Write numbers from 1 to N to the file
    for (int i = 1; i <= N; ++i) {
        outFile << i << " ";
    }

    outFile.close(); // Close the file

    // Open the file for reading
    std::ifstream inFile("numbers.txt");

    if (!inFile) {
        std::cerr << "Error while setting up the data" << std::endl;
        return 1; // Return an error code
    }

    // Check if the file is empty
    inFile.seekg(0, std::ios::end);
    if (inFile.tellg() == 0) {
        std::cerr << "Error while setting up the data" << std::endl;
        return 1; // Return an error code
    }

    // Reset the file pointer to the beginning
    inFile.seekg(0, std::ios::beg);

    int num;
    while (inFile >> num) {
        std::cout << num << " ";
    }

    inFile.close(); // Close the file

    std::cout << std::endl; // Print a newline at the end

    return 0; // Return success
}
