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
    BankAccount acc;
    acc.assignInitialValues("Rahul", 123456, "Savings", 5000.0);
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();
    return 0;
}
