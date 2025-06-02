#include <iostream>
#include <cmath>
using namespace std;

class FLOAT {
    private:
        float value;
    
    public:
        FLOAT(float v = 0.0f) {
            value = v;
        }
    
        FLOAT operator+(FLOAT f) {
            return FLOAT(value + f.value);
        }
    
        FLOAT operator-(FLOAT f) {
            return FLOAT(value - f.value);
        }
    
        FLOAT operator*(FLOAT f) {
            return FLOAT(value * f.value);
        }
    
        FLOAT operator/(FLOAT f) {
            return FLOAT(value / f.value);
        }
    
        void display() {
            cout << "Value: " << value << endl;
        }
    };
    
    int main() {
    
        cout << "\n=== FLOAT Operations ===" << endl;
        FLOAT f1(3.5), f2(1.5);
        FLOAT f3 = f1 + f2;
        f3.display();
        (f1 - f2).display();
        (f1 * f2).display();
        (f1 / f2).display();
    
        return 0;
    }
    