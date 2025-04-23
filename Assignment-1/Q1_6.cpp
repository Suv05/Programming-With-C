#include <iostream>
using namespace std;

void readDisplayMatrix(int** matrix, int n, int m = 3) {
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
    int m = 3, n;
    cout << "Enter number of columns: ";
    cin >> n;

    int** matrix = new int*[m];
    for (int i = 0; i < m; ++i)
        matrix[i] = new int[n];

    readDisplayMatrix(matrix, n);

    for (int i = 0; i < m; ++i)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
