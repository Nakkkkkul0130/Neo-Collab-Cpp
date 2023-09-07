#include <iostream>
using namespace std;

class ArraySearch {
public:
    static void searchSeatAvailability(int seats[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (seats[i] == target) {
                cout << "Seat is available." << endl;
                return;
            }
        }
        cout << "Seat is not available." << endl;
    }
};

int main() {
    int n;
    cin >> n;
    int seats[100]; // Assuming a maximum of 100 seats, you can adjust this as needed
    for (int i = 0; i < n; i++) {
        cin >> seats[i];
    }
    int target;
    cin >> target;

    ArraySearch::searchSeatAvailability(seats, n, target);

    return 0;
}

