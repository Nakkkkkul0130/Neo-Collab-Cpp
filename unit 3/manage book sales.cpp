#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SalesData {
private:
    string isbn;
    double total;
    int units;

public:
    SalesData(const string& isbn, double total, int units)
        : isbn(isbn), total(total), units(units) {}

    void display() const {
        cout << "Book: " << isbn << endl;
        cout << "Units Sold: " << units << endl;
        cout << fixed << setprecision(2);
        cout << "Revenue Generated: " << total << endl;
        double averagePrice = total / units;
        cout << "Average Price: " << averagePrice << endl;
    }
};

int main() {
    string isbn;
    double total;
    int units;

    getline(cin, isbn);
    cin >> total >> units;

    SalesData salesData(isbn, total, units);
    salesData.display();

    return 0;
}
