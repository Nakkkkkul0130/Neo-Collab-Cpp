#include <iostream>
#include <string>
using namespace std;

class BinaryConverter {
public:
    BinaryConverter(int num) : number(num) {}

    string intToBinary() const {
        string binary(32, '0');
        int i = 31;

        int temp = number;
        while (i >= 0) {
            binary[i] = (temp & 1) + '0';
            temp >>= 1;
            i--;
        }

        return binary;
    }

private:
    int number;
};

int main() {
    int num;
    cin >> num;

    BinaryConverter converter(num);
    string binary = converter.intToBinary();
    cout << "Binary representation: " << binary << endl;

    return 0;
}
