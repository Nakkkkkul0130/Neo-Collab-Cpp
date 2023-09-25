#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    if (n > 20) {
        std::cout << "Exceeding limit!" << std::endl;
        return 0;
    }

    std::ofstream outFile("percentages.txt");

    if (!outFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        double percentage;
        int totalValue;
        std::cin >> percentage >> totalValue;
        outFile << std::fixed << std::setprecision(1) << percentage << " " << totalValue << std::endl;
    }

    outFile.close();

    std::ifstream inFile("percentages.txt");

    if (!inFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    double percentage;
    int totalValue;
    while (inFile >> percentage >> totalValue) {
        double actualValue = (percentage * totalValue) / 100.0;
        std::cout << std::fixed << std::setprecision(2) << actualValue << std::endl;
    }

    inFile.close();

    return 0;
}

