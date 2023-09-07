#include <iostream>
using namespace std;

class MatrixOperations {
public:
    static bool isSymmetric(int **matrix, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    return false;
                }
            }
        }
        return true;
    }

    static void transposeMatrix(int **matrix, int n) {
        int **transpose = new int *[n];
        for (int i = 0; i < n; i++) {
            transpose[i] = new int[n];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                transpose[i][j] = matrix[j][i];
            }
        }

        cout << "The Transpose matrix is:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << transpose[i][j] << "\t";
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++) {
            delete[] transpose[i];
        }
        delete[] transpose;
    }
};

int main() {
    int n;
    cin >> n;

    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    

    MatrixOperations::transposeMatrix(matrix, n);

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    if (MatrixOperations::isSymmetric(matrix, n)) {
        cout << "Matrix is Symmetric" << endl;
    } else {
        cout << "Matrix is not Symmetric" << endl;
    }

    return 0;
}

