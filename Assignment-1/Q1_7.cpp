#include <iostream>
#define MAX3(a, b, c) ((a > b && a > c) ? a : (b > c ? b : c))

using namespace std;

int main()
{
    int a = 10, b = 20, c = 15;
    cout << "Largest is: " << MAX3(a, b, c) << endl;
    return 0;
}
