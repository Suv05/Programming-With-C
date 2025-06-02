#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    float radius;
    float angle; // in radians

public:
    Polar(float r = 0, float a = 0) {
        radius = r;
        angle = a;
    }

    Polar operator+(Polar p) {
        float x1 = radius * cos(angle);
        float y1 = radius * sin(angle);

        float x2 = p.radius * cos(p.angle);
        float y2 = p.radius * sin(p.angle);

        float x = x1 + x2;
        float y = y1 + y2;

        float r = sqrt(x * x + y * y);
        float a = atan2(y, x);

        return Polar(r, a);
    }

    void display() {
        cout << "Radius: " << radius << ", Angle: " << angle << " radians" << endl;
    }
};

int main() {
    cout << "=== Polar Addition ===" << endl;
    Polar p1(5, 0.785398); // ~45 degrees
    Polar p2(3, 1.5708);   // ~90 degrees
    Polar p3 = p1 + p2;
    p3.display();

   return 0;
}
