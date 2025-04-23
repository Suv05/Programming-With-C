#include <iostream>
using namespace std;

enum Day { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    int dayNumber;
    cout << "Enter day number (1-7): ";
    cin >> dayNumber;
    Day day = static_cast<Day>(dayNumber);

    switch (day) {
        case SUNDAY: cout << "Sunday"; break;
        case MONDAY: cout << "Monday"; break;
        case TUESDAY: cout << "Tuesday"; break;
        case WEDNESDAY: cout << "Wednesday"; break;
        case THURSDAY: cout << "Thursday"; break;
        case FRIDAY: cout << "Friday"; break;
        case SATURDAY: cout << "Saturday"; break;
        default: cout << "Invalid day number!";
    }
    return 0;
}
