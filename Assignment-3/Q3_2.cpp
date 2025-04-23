#include <iostream>
#include <string>
using namespace std;

class Book {
    string author, title, publisher;
    float price;

public:
    Book() {}

    Book(string a, string t, string p, float pr) {
        author = a;
        title = t;
        publisher = p;
        price = pr;
    }

    bool match(string a, string t) {
        return (author == a && title == t);
    }

    void display() {
        cout << "Title: " << title << "\nAuthor: " << author 
             << "\nPublisher: " << publisher << "\nPrice: " << price << endl;
    }
};

int main() {
    const int size = 3;
    Book books[size] = {
        Book("R. Sharma", "C++ Basics", "TechPress", 299.99),
        Book("A. Kumar", "Python Pro", "CodeBooks", 399.50),
        Book("R. Sharma", "DSA Magic", "EduPress", 350.75)
    };

    string searchAuthor, searchTitle;
    cout << "Enter book title: ";
    getline(cin, searchTitle);
    cout << "Enter author name: ";
    getline(cin, searchAuthor);

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (books[i].match(searchAuthor, searchTitle)) {
            cout << "Book Found:\n";
            books[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book not available in the shop.\n";
    }

    return 0;
}
