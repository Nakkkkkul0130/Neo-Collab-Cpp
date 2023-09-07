#include <iostream>

int main() {
    int n, srch_num;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cin >> srch_num;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == srch_num) {
            count++;
        }
    }

    if (count > 0) {
        std::cout << "The number " << srch_num << " appears " << count << " times" << std::endl;
    } else {
        std::cout << "The number " << srch_num << " is not found in the array." << std::endl;
    }

    return 0;
}
