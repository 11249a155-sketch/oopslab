#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    float price;

public:
    void input() {
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }
    void display() const {
        cout << "\n--- Book Details ---\n";
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : $" << price << endl;
    }
};

int main() {
    Book book1;
    book1.input();
    book1.display();

    return 0;
}
