#include <iostream>

class Base {
public:
    virtual int game(char letter1, char letter2) {
        return 0;
    }
};

class Derived : public Base {
public:
    int game(char letter1, char letter2) override {
        int score = 0;

        if (isupper(letter1)) {
            score += 10;
        } else if (islower(letter1)) {
            score -= 5;
        }

        if (isupper(letter2)) {
            score += 10;
        } else if (islower(letter2)) {
            score -= 5;
        }

        return score;
    }
};

int main() {
    char letter1, letter2;
    std::cin >> letter1 >> letter2;

    Derived derived;
    int totalScore = derived.game(letter1, letter2);

    std::cout << "Score: " << totalScore << std::endl;

    return 0;
}

