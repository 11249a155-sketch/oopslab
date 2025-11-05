#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float marks;
public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    s1.input    
    s1.display();
    return 0;
}
