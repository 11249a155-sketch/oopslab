#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];

    cout << "\n--- Enter Student Details ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\n--- Displaying Student Details ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << " Details:\n";
        students[i].display();
    }

    return 0;
}
