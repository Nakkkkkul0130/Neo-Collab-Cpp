#include <iostream>
#include <string>

class SilverStall {
protected:
    std::string name;
    std::string detail;
    std::string owner;
    int cost;

public:
    SilverStall() {}

    void input() {
        std::cin >> name >> detail >> owner >> cost;
    }

    int calculateCost() {
        return cost;
    }
};

class GoldStall : public SilverStall {
protected:
    int tvSet;

public:
    GoldStall() {}

    void input() {
        SilverStall::input();
        std::cin >> tvSet;
    }

    int calculateCost() {
        return cost + (tvSet * 100);
    }
};

class PlatinumStall : public GoldStall {
protected:
    int projector;

public:
    PlatinumStall() {}

    void input() {
        GoldStall::input();
        std::cin >> projector;
    }

    int calculateCost() {
        return cost + (tvSet * 100) + (projector * 500);
    }
};

int main() {
    int n;
    std::cin >> n;

    if (n == 1) {
        SilverStall silverStall;
        silverStall.input();
        std::cout << silverStall.calculateCost() << std::endl;
    } else if (n == 2) {
        GoldStall goldStall;
        goldStall.input();
        std::cout << goldStall.calculateCost() << std::endl;
    } else if (n == 3) {
        PlatinumStall platinumStall;
        platinumStall.input();
        std::cout << platinumStall.calculateCost() << std::endl;
    } else {
        std::cout << "Invalid Input" << std::endl;
    }

    return 0;
}
