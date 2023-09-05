#include <iostream>
using namespace std;
int calculatesum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i; 
    }
    return sum;
}

int main() {
    int low, high;
    cin >> low;
    cin >> high;
    int sum = calculatesum(low, high);
    cout << sum << endl;
    
    return 0;
}