#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;
    int length;

public:
    // Default constructor
    String() {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& s) {
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
    }

    // Assignment operator
    String& operator=(const String& s) {
        if (this != &s) {
            delete[] str;
            length = s.length;
            str = new char[length + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    // Concatenation function
    String add(const String& s) {
        String result;
        result.length = length + s.length;
        delete[] result.str;
        result.str = new char[result.length + 1];
        strcpy(result.str, str);
        strcat(result.str, s.str);
        return result;
    }

    // Display function
    void display() {
        cout << str << endl;
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    String s1;                         // Uninitialized string
    String s2("Well done!");          // Initialized with constant
    String s3(" Keep it up!");
    String s4 = s2.add(s3);           // Concatenate

    cout << "s1: "; s1.display();
    cout << "s2: "; s2.display();
    cout << "s3: "; s3.display();
    cout << "s4 (s2 + s3): "; s4.display();

    return 0;
}
