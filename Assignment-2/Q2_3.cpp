#include <iostream>
using namespace std;

class DB;

class DM {
    int meters, centimeters;
public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    void display() {
        cout << "Distance: " << meters << "m " << centimeters << "cm\n";
    }

    friend DM add(DM, DB);
};

class DB {
    int feet, inches;
public:
    DB(int f = 0, int in = 0) : feet(f), inches(in) {}

    void display() {
        cout << "Distance: " << feet << "ft " << inches << "in\n";
    }

    friend DM add(DM, DB);
};

DM add(DM d1, DB d2) {
    int totalCM = d1.meters * 100 + d1.centimeters;
    int totalIN = d2.feet * 12 + d2.inches;

    totalCM += totalIN * 2.54; // 1 inch = 2.54 cm

    DM result;
    result.meters = totalCM / 100;
    result.centimeters = totalCM % 100;
    return result;
}

int main() {
    DM d1(2, 50);
    DB d2(5, 8);

    DM result = add(d1, d2);
    result.display();
    return 0;
}
