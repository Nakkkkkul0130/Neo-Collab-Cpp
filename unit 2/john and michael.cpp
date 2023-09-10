#include <iostream>

class MultiplicationGame {
public:
    void game(int n) {
        int p = 1;  // Initial value of p
        bool johnTurn = true; // John starts the game

        while (p < n) {
            if (johnTurn) {
                // John multiplies p by the next number
                int nextNumber = (p <= 9) ? p + 1 : 2;
                p *= nextNumber;
            } else {
                // Michael multiplies p by 2
                p *= 2;
            }

            johnTurn = !johnTurn; // Switch turns
        }

        std::cout << n << " " << (johnTurn ? "John wins" : "Michael wins") << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;

    MultiplicationGame game;
    game.game(n);

    return 0;
}
