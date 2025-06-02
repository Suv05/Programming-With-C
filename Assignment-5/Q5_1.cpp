#include <iostream>
#include <string>
using namespace std;

class Staff
{
protected:
    int code;
    string name;

public:
    void get_data()
    {
        cout << "Enter code and name: ";
        cin >> code >> name;
    }

    void display()
    {
        cout << "Code: " << code << ", Name: " << name << endl;
    }
};

class Teacher : public Staff
{
protected:
    string subject;
    string publication;

public:
    void get_data()
    {
        Staff::get_data();
        cout << "Enter subject and publication: ";
        cin >> subject >> publication;
    }

    void display()
    {
        Staff::display();
        cout << "Subject: " << subject << ", Publication: " << publication << endl;
    }
};

class Officer : public Staff
{
protected:
    string grade;

public:
    void get_data()
    {
        Staff::get_data();
        cout << "Enter grade: ";
        cin >> grade;
    }

    void display()
    {
        Staff::display();
        cout << "Grade: " << grade << endl;
    }
};

class Typist : public Staff
{
protected:
    float speed;

public:
    void get_data()
    {
        Staff::get_data();
        cout << "Enter typing speed: ";
        cin >> speed;
    }

    void display()
    {
        Staff::display();
        cout << "Typing speed: " << speed << " wpm" << endl;
    }
};

class Regular : public Typist
{
public:
    void get_data()
    {
        Typist::get_data();
    }

    void display()
    {
        Typist::display();
        cout << "Typist Type: Regular" << endl;
    }
};

class Casual : public Typist
{
    float daily_wages;

public:
    void get_data()
    {
        Typist::get_data();
        cout << "Enter daily wages: ";
        cin >> daily_wages;
    }

    void display()
    {
        Typist::display();
        cout << "Typist Type: Casual, Daily Wages: " << daily_wages << endl;
    }
};

int main()
{
    cout << "=== Staff Hierarchy Demo ===" << endl;
    Teacher t;
    Officer o;
    Regular r;
    Casual c;

    cout << "\nEnter Teacher Info:\n";
    t.get_data();
    cout << "\nEnter Officer Info:\n";
    o.get_data();
    cout << "\nEnter Regular Typist Info:\n";
    r.get_data();
    cout << "\nEnter Casual Typist Info:\n";
    c.get_data();

    cout << "\n--- Displaying All Staff Info ---" << endl;
    t.display();
    o.display();
    r.display();
    c.display();

    return 0;
}
