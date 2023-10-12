#include <iostream>
#include <string>
using namespace std;

class ItemDetails {
public:
    string itemName;
    int itemNo;
    float itemPrice;
    void getItemDetails() {
        cout << "1. Item Name: " << itemName << endl;
        cout << "2. Item No.: " << itemNo << endl;
        cout << "3. Item Price: " << itemPrice << endl;
    }
};

class DiscountDetails {
public:
    int discountPercent;
    float discountedPrice;
    void getDiscountDetails() {
        cout << "4. Discount Percent: " << discountPercent << endl;
        cout << "5. Discounted Price: " << discountedPrice << endl;
    }
};

class DiscountedItem : public ItemDetails, public DiscountDetails {
public:
    void displayDetails() {
        getItemDetails();
        if (discountPercent > 0) {
            getDiscountDetails();
        }
    }
};

int main() {
    int n;
    cin >> n;
    DiscountedItem items[n];
    float totalPrice = 0, totalDiscount = 0;
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, items[i].itemName);
        cin >> items[i].itemNo >> items[i].itemPrice >> items[i].discountPercent;
        items[i].discountedPrice = items[i].itemPrice - (items[i].itemPrice * items[i].discountPercent / 100.0);
        totalPrice += items[i].itemPrice;
        totalDiscount += (items[i].itemPrice * items[i].discountPercent / 100.0);
    }
    for (int i = 0; i < n; i++) {
        cout << "Details of item " << i+1 << " :" << endl;
        items[i].displayDetails();
    }
    cout << "Total Price: " << totalPrice << endl;
    cout << "Total Discount: " << totalDiscount << endl;

    return 0;
}