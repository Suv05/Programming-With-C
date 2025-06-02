#include <iostream>
#include <string>
using namespace std;
class Shape
{
protected:
    float x, y;

public:
    void get_data()
    {
        cout << "Enter two dimensions: ";
        cin >> x >> y;
    }

    virtual void display_area()
    {
        cout << "Area not defined for base shape." << endl;
    }
};

class Triangle : public Shape
{
public:
    void display_area() override
    {
        cout << "Area of Triangle: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display_area() override
    {
        cout << "Area of Rectangle: " << x * y << endl;
    }
};

int main()
{
    cout << "\n=== Shape Area Calculation ===" << endl;
    Shape *s;
    Triangle tri;
    Rectangle rect;

    cout << "\n-- Triangle --\n";
    s = &tri;
    s->get_data();
    s->display_area();

    cout << "\n-- Rectangle --\n";
    s = &rect;
    s->get_data();
    s->display_area();

    return 0;
}
