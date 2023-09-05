#include <iostream>
using namespace std;
int* performArithmetic(int n1, int n2) {
    int* result = new int(n1 + n2);
    return result;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int* res = performArithmetic(n1, n2);
    cout << "Result: " << *res << endl;
    cout << "Error: Dangling pointer detected !" << endl;
    delete res;

    return 0;
}