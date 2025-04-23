#include <iostream>
using namespace std;

int* createVector(int size) {
    return new int[size];
}

int main() {
    int m;
    cout << "Enter size of vector: ";
    cin >> m;
    int* vec = createVector(m);
    for (int i = 0; i < m; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> vec[i];
    }
    cout << "Vector: ";
    for (int i = 0; i < m; i++) cout << vec[i] << " ";
    delete[] vec;
    return 0;
}
