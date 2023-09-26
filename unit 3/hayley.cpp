#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 100;

struct Array {
    int size;
    int data[MAX_SIZE];
};

void reverseArray(Array &arr) {
    int left = 0;
    int right = arr.size - 1;

    while (left < right) {
        // Swap elements at left and right indices
        int temp = arr.data[left];
        arr.data[left] = arr.data[right];
        arr.data[right] = temp;

        // Move indices toward each other
        left++;
        right--;
    }
}

int main() {
    Array arr;
    cin >> arr.size;

    if (arr.size > MAX_SIZE) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    for (int i = 0; i < arr.size; i++) {
        cin >> arr.data[i];
    }

    // Reverse the array
    reverseArray(arr);

    // Write the reversed array to 'reverse.txt'
    ofstream outFile("reverse.txt");
    for (int i = 0; i < arr.size; i++) {
        outFile << arr.data[i] << " ";
    }
    outFile.close();

    // Read and print the reversed array from 'reverse.txt'
    ifstream inFile("reverse.txt");
    int num;
    while (inFile >> num) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
