#include <iostream>
using namespace std;

void readDisplayMatrix(int** matrix, int m, int n) {
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    cout << "Matrix is:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int** matrix = new int*[m];
    for (int i = 0; i < m; ++i)
        matrix[i] = new int[n];

    readDisplayMatrix(matrix, m, n);

    for (int i = 0; i < m; ++i)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
