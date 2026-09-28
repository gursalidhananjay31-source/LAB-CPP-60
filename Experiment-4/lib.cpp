#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    string title;
    string author;
    int bookid;
    bool isIssued;
    string issuedTo;

public:
    // Constructor
    LibraryBook(string t, string a, int id) {
        title = t;
        author = a;
        bookid = id;
        isIssued = false;
    }

    // Issue book
    void issueBook(string name) {
        if (isIssued == false) {
            isIssued = true;
            issuedTo = name;
            cout << "Book issued to " << name << endl;
        }
        else {
            cout << "Book is already issued!" << endl;
        }
    }

    // Return book
    void returnBook() {
        if (isIssued == true) {
            isIssued = false;
            cout << "Book returned." << endl;
        }
        else {
            cout << "Book is not issued!" << endl;
        }
    }

    // Display book details
    void display() {
        cout << "\nBook ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;

        if (isIssued)
            cout << "Status: Issued to " << issuedTo << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main() {

    LibraryBook book1("", "Tite Kubo", 101);
    LibraryBook book2("Attack on Titan", "Hajime Isayama", 102);

    book1.display();
    book2.display();

    book1.issueBook("Dhananjay");
    book2.issueBook("Raj");

    book1.display();
    book2.display();

    book1.returnBook();
    book2.returnBook();

    book1.display();
    book2.display();

    return 0;
}