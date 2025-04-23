#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignInitialValues(string n, int accNo, string type, double bal) {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else
            balance -= amount;
    }

    void display() {
        cout << "Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount customers[10];

    for (int i = 0; i < 10; i++) {
        string name, type;
        int accNo;
        double bal;
        cout << "Enter details for customer " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Account No: ";
        cin >> accNo;
        cout << "Account Type: ";
        cin >> type;
        cout << "Initial Balance: ";
        cin >> bal;
        customers[i].assignInitialValues(name, accNo, type, bal);
    }

    cout << "\nCustomer Details:\n";
    for (int i = 0; i < 10; i++) {
        customers[i].display();
    }

    return 0;
}
