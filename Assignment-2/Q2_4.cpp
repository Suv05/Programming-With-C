#include <iostream>
using namespace std;

class Distance {
    int km, m, cm;
public:
    void inputDistance(int kmVal, int mVal, int cmVal) {
        km = kmVal;
        m = mVal;
        cm = cmVal;
    }

    void display() {
        cout << km << " km " << m << " m " << cm << " cm\n";
    }

    Distance addDistance(Distance d2) {
        Distance result;
        result.cm = cm + d2.cm;
        result.m = m + d2.m + result.cm / 100;
        result.cm %= 100;
        result.km = km + d2.km + result.m / 1000;
        result.m %= 1000;
        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of distance objects: ";
    cin >> n;
    Distance* d = new Distance[n];

    for (int i = 0; i < n; i++) {
        int km, m, cm;
        cout << "Enter km, m, cm for object " << i << ": ";
        cin >> km >> m >> cm;
        d[i].inputDistance(km, m, cm);
    }

    for (int i = 0; i < n; i++) {
        cout << "Distance " << i << ": ";
        d[i].display();
    }

    int i1, i2;
    cout << "Enter indexes of 2 objects to add: ";
    cin >> i1 >> i2;

    Distance result = d[i1].addDistance(d[i2]);
    cout << "Result after addition: ";
    result.display();

    delete[] d;
    return 0;
}
