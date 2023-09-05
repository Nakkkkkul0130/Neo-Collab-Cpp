#include <iostream>

int calculateEvenProduct(int* arr, int size) {
    int product = 1;
    bool hasEven = false; // Flag to check if there are even elements in the array
    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            product *= *(arr + i);
            hasEven = true; // Set the flag to indicate that an even element was found
        }
    }
    
    return hasEven ? product : -1; // Return -1 if no even elements found
}

int main() {
    int n;
    std::cin >> n;
    
    int arr[10];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int result = calculateEvenProduct(arr, n);
    if (result != -1) {
        std::cout << "Product of even elements: " << result << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }
    
    return 0;
}
