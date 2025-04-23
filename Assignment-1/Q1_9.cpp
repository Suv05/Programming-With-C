#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double result = 1;
    for (int i = 0; i < n; i++) result *= m;
    return result;
}

int power(int m, int n = 2) {
    int result = 1;
    for (int i = 0; i < n; i++) result *= m;
    return result;
}

int main() {
    double md;
    int id, n;
    cout << "Enter double base: ";
    cin >> md;
    cout << "Enter int base: ";
    cin >> id;
    cout << "Enter exponent: ";
    cin >> n;

    cout << "Double Power: " << power(md, n) << endl;
    cout << "Int Power: " << power(id, n) << endl;
    return 0;
}
