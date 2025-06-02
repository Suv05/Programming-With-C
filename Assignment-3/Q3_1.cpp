#include <iostream>
#include <cstring>  // For strcpy, strlen, strcat
using namespace std;

class String {
    char* str;

public:
    // Default constructor
    String() {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Assignment operator
    String& operator=(const String& s) {
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    // Function to concatenate two strings
    String add(const String& s2) {
        String result;
        delete[] result.str;
        result.str = new char[strlen(str) + strlen(s2.str) + 1];
        strcpy(result.str, str);
        strcat(result.str, s2.str);
        return result;
    }

    // Function to display the string
    void display() {
        cout << str << endl;
    }

    // Destructor
    ~String() {
        delete[] str;
    }
};

int main() {
    // (a) Create uninitialized string
    String s1;

    // (b) Create string with constant
    String s2("Well done!");
    String s3("You did it!");

    // (c) Concatenate s2 and s3
    String s4 = s2.add(s3);

    // (d) Display all strings
    cout << "s1: ";
    s1.display();

    cout << "s2: ";
    s2.display();

    cout << "s3: ";
    s3.display();

    cout << "s4 (s2 + s3): ";
    s4.display();

    return 0;
}
