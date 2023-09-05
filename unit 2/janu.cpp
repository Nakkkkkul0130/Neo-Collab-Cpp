#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, M;
    cin >> N;
    cin >> M;

    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            sum += matrix[i][j];
            cout << matrix[i][j] << " ";
        }
        cout << "SUM: " << sum <<endl;
        
    }

    return 0;
}