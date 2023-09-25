#include <iostream>
#include <cmath>
using namespace std;

class Demo {
private:
    int n;

public:
    Demo(int num) {
        n = num;
        cout << "Inside Constructor" << endl;
    }
    
    ~Demo() {
        cout << "Inside Destructor" << endl;
    }
    
    void display() {
        int sq = n * n;
        double sqroot = sqrt(n);
        
        cout << "square = " << sq << endl;
        cout << "square root = " << sqroot << endl;
    }
};

int main() {
    int n;
    cin >> n;
    
    Demo obj(n);
    obj.display();
    
    return 0;
}