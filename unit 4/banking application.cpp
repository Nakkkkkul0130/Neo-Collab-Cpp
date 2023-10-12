#include <iostream>

class AddAmountBase {
protected:
    int amount; 
public:
    AddAmountBase() : amount(50) {}

    AddAmountBase(int a) : amount(50 + a) {}
};

class AddAmount : public AddAmountBase {
public:
    AddAmount() : AddAmountBase() {}

    AddAmount(int a) : AddAmountBase(a) {}

    void print_amount() {
        std::cout << amount << std::endl;
    }
};

int main() {
    int input_amount;
    std::cin >> input_amount;

    AddAmount piggyBank(input_amount);

    piggyBank.print_amount();

    return 0;
}
