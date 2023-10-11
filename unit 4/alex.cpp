#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle() {
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int n;
    cin >> n;
    Rectangle rectangles[n];
    for (int i = 0; i < n; i++) {
        int l, w;
        cin >> l >> w;
        rectangles[i] = Rectangle(l, w);
    }
    int minPerimeter = rectangles[0].perimeter();
    for (int i = 1; i < n; i++) {
        int p = rectangles[i].perimeter();
        if (p < minPerimeter) {
            minPerimeter = p;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "Perimeter of rectangle " << i+1 << ": " << rectangles[i].perimeter() << endl;
    }
    cout << "Perimeter of the smallest rectangle: " << minPerimeter << endl;
    return 0;
}