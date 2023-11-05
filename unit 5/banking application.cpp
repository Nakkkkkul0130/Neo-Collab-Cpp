#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Account {
public:
    virtual void display() = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
};

class SavingsAccount : public Account {
private:
    int accountNumber;
    string name;
    double balance;

public:
    SavingsAccount(int accno, const string& n, double initialBalance)
        : accountNumber(accno), name(n), balance(initialBalance) {}

    void display() {
        cout << accountNumber << " " << name << " " << fixed << setprecision(2) << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Balance after deposit: " << fixed << setprecision(2) << balance << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Balance after withdrawal: " << fixed << setprecision(2) << balance << endl;
            } else {
                cout << "Insufficient balance for withdrawal!" << endl;
            }
        }
    }
};

int main() {
    int choice;
    cin >> choice;

    if (choice == 1) {
        int accno;
        string name;
        double initialBalance;
        cin >> accno >> name >> initialBalance;
        SavingsAccount account(accno, name, initialBalance);
        account.display();

        int option;
        cin >> option;

        if (option == 2) {
            double depositAmount;
            cin >> depositAmount;
            account.deposit(depositAmount);
        } else if (option == 3) {
            double withdrawAmount;
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
        } else {
            cout << "Invalid option" << endl;
        }

        account.display();
    }

    return 0;
}
