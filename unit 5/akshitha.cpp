#include <iostream>
using namespace std;

class Main {
public:
    Main(int day) {
        if (day <= 7 && day>=1) {
            switch (day) {
                case 1:
                    cout << "Sunday";
                    break;
                case 2:
                    cout << "Monday";
                    break;
                case 3:
                    cout << "Tuesday";
                    break;
                case 4:
                    cout << "Wednesday";
                    break;
                case 5:
                    cout << "Thursday";
                    break;
                case 6:
                    cout << "Friday";
                    break;
                case 7:
                    cout << "Saturday";
                    break;
                default:
                    break;
            }
        } else {
            cout << "Invalid";
        }
    }

    virtual ~Main() {}

};

int main() {
    int d;
    cin >> d;
    Main obj(d);

    return 0;
}

