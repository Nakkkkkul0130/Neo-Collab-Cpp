#include <iostream>

using namespace std;

class Cube {
private:
    double length;
    double breadth;
    double height;

public:
    void setLength(double l) {
        length = l;
    }

    void setBreadth(double b) {
        breadth = b;
    }

    void setHeight(double h) {
        height = h;
    }

    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    double l, b, h;
    cin >> l >> b >> h;

    Cube cube;
    cube.setLength(l);
    cube.setBreadth(b);
    cube.setHeight(h);

    double volume = cube.getVolume();
    cout << volume << endl;

    return 0;
}

