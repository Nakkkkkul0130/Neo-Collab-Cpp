#include <iostream>

using namespace std;

class Account
{

protected:
    double balance;

public:
    Account() : balance(0.0) {}

    virtual void deposit(double amount) = 0;

    virtual void withdraw(double amount) = 0;

    virtual void displayBalance() = 0;
};

class SavingsAccount : public Account
{

public:
    void deposit(double amount) override
    {

        balance += amount;

        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount) override
    {

        if (balance - amount >= 0)
        {

            balance -= amount;

            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {

            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }
    }

    void displayBalance() override
    {

        cout << "Savings Account Balance: " << balance << endl;
    }
};

class CheckingAccount : public Account
{

public:
    void deposit(double amount) override
    {

        balance += amount;

        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount) override
    {

        if (balance - amount >= 0)
        {

            balance -= amount;

            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {

            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }
    }

    void displayBalance() override
    {

        cout << "Checking Account Balance: " << balance << endl;
    }
};

int main()
{

    SavingsAccount savingsAccount;

    CheckingAccount checkingAccount;

    int choice;

    double amount;

    do
    {

        cin >> choice;

        switch (choice)
        {

        case 1:

            cin >> amount;

            savingsAccount.deposit(amount);

            break;

        case 2:

            cin >> amount;

            savingsAccount.withdraw(amount);

            break;

        case 3:

            savingsAccount.displayBalance();

            break;

        case 0:

            cout << "Exiting the program. Goodbye!";

            break;

        default:

            cout << "Invalid choice. Please try again.";
        }

    } while (choice != 0);

    return 0;
}
