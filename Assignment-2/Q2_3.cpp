#include <iostream>
using namespace std;

class DB; // Forward declaration of class DB. This is needed because class DM has a friend function that takes a DB object.

class DM
{
    int meters, centimeters; // Private data members to store meters and centimeters.
public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {} // Constructor to initialize meters and centimeters. Default values are 0.

    void display()
    {
        cout << "Distance: " << meters << "m " << centimeters << "cm\n"; // Method to display the distance in meters and centimeters.
    }

    friend DM add(DM, DB); // Declaration of the friend function 'add' that takes a DM and a DB object.
};

class DB
{
    int feet, inches; // Private data members to store feet and inches.
public:
    DB(int f = 0, int in = 0) : feet(f), inches(in) {} // Constructor to initialize feet and inches. Default values are 0.

    void display()
    {
        cout << "Distance: " << feet << "ft " << inches << "in\n"; // Method to display the distance in feet and inches.
    }

    friend DM add(DM, DB); // Declaration of the friend function 'add' (same as in DM, as it's a friend to both).
};

// Friend function 'add' that takes a DM object 'd1' and a DB object 'd2'.
DM add(DM d1, DB d2)
{
    int totalCM = d1.meters * 100 + d1.centimeters; // Convert DM distance to total centimeters.
    int totalIN = d2.feet * 12 + d2.inches;         // Convert DB distance to total inches.

    totalCM += totalIN * 2.54; // Convert total inches to centimeters and add to the total centimeters. (1 inch = 2.54 cm)

    DM result;                          // Create a DM object to store the result.
    result.meters = totalCM / 100;      // Calculate meters from the total centimeters.
    result.centimeters = totalCM % 100; // Calculate remaining centimeters.
    return result;                      // Return the resulting DM object.
}

int main()
{
    DM d1(2, 50); // Create a DM object with 2 meters and 50 centimeters.
    DB d2(5, 8);  // Create a DB object with 5 feet and 8 inches.

    DM result = add(d1, d2); // Call the 'add' function to add d1 and d2, storing the result in a DM object.
    result.display();        // Display the result, which will be in meters and centimeters.
    return 0;                // Indicate successful program execution.
}