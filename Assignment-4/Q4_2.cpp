#include <iostream>
#include <cmath>
using namespace std;
class Counter
{
private:
    int count;

public:
    Counter(int c = 0)
    {
        count = c;
    }

    // Prefix ++
    Counter operator++()
    {
        ++count;      // increment first
        return *this; // return current object after increment
    }

    // Postfix ++
    Counter operator++(int)
    {
        Counter temp = *this; // save current object
        count++;              // then increment
        return temp;          // return old value
    }

    void display()
    {
        cout << "Count: " << count << endl;
    }
};

int main()
{

    cout << "\n=== Counter Increment ===" << endl;
    Counter c1(5);
    ++c1;
    c1.display();
    c1++;
    c1.display();

    return 0;
}
