#include <iostream>
using namespace std;

class Money {
private:
    int rupee;
    int paisa;

public:
    Money() : rupee(0), paisa(0) {}

    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {
        paisa = p;
        if (paisa > 99) {
            rupee += paisa / 100;
            paisa %= 100;
        }
    }

    int getRupee() const {
        return rupee;
    }

    int getPaisa() const {
        return paisa;
    }
};

int main() {
    Money m1, m2;
    int r, p;

    cin >> r >> p;
    m1.setRupee(r);
    m1.setPaisa(p);

    cin >> r >> p;
    m2.setRupee(r);
    m2.setPaisa(p);

    int totalRupee = m1.getRupee() + m2.getRupee();
    int totalPaisa = m1.getPaisa() + m2.getPaisa();

    if (totalPaisa > 99) {
        totalRupee += totalPaisa / 100;
        totalPaisa %= 100;
    }

    cout << totalRupee << "." << totalPaisa << endl;

    return 0;
}
