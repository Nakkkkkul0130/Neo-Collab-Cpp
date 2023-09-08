#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

class BankATM {
private:
    int atmID;
    string location;
    float availableCash;

public:
    BankATM(int id, const string& loc, float cash) {
        atmID = id;
        location = loc;
        availableCash = cash;
    }

    // Member function to withdraw cash
    void withdrawCash(float amount) {
        if (amount <= availableCash) {
            availableCash -= amount;
            cout << "Withdrawal successful. Available cash: " << fixed << setprecision(1) << availableCash << endl;
        } else {
            cout << "Insufficient cash in the ATM." << endl;
        }
    }

    // Member function to deposit cash
    void depositCash(float amount) {
        availableCash += amount;
        cout << "Deposit successful. Available cash: " << fixed << setprecision(1) << availableCash << endl;
    }

    // Member function to display available cash
    void displayAvailableCash() {
        cout << "Available cash in ATM: " << fixed << setprecision(1) << availableCash << endl;
    }
};

int main() {
    int atmID;
    string location;
    float availableCash, withdrawAmount, depositAmount;

    // Input ATM information
    cin >> atmID;
    cin.ignore(); // Ignore the newline character
    getline(cin, location);
    cin >> availableCash;

    // Create a BankATM object
    BankATM atm(atmID, location, availableCash);

    // Input withdrawal and deposit amounts
    cin >> withdrawAmount >> depositAmount;

    // Perform withdrawal, deposit, and display available cash
    atm.withdrawCash(withdrawAmount);
    atm.depositCash(depositAmount);
    atm.displayAvailableCash();

    return 0;
}
