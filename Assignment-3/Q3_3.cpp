#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    static Complex addcomplex(Complex c1, Complex c2) {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }

    void display() {
        cout << real << " +j " << imag << endl;
    }
};

int main() {
    Complex A(3.12, 5.65);
    Complex B(2.75, 1.21);

    Complex C = Complex::addcomplex(A, B);

    cout << "A = "; A.display();
    cout << "B = "; B.display();
    cout << "C = A + B = "; C.display();

    return 0;
}
