#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    
    Employee(string n = "", double s = 0.0) {
        name = n;
        salary = s;
    }
    void display() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
    bool operator>(const Employee& e) {
        return salary > e.salary;
    }
    bool operator<(const Employee& e) {
        return salary < e.salary;
    }
    bool operator==(const Employee& e) {
        return salary == e.salary;
    }
};

int main() {
    Employee emp1("Alice", 50000);
    Employee emp2("Bob", 60000);

    cout << "Employee 1: ";
    emp1.display();
    cout << "Employee 2: ";
    emp2.display();
    if(emp1 > emp2)
        cout << emp1.getName() << " has a higher salary than " << emp2.getName() << endl;
    else if(emp1 < emp2)
        cout << emp1.getName() << " has a lower salary than " << emp2.getName() << endl;
    else
        cout << emp1.getName() << " and " << emp2.getName() << " have equal salary." << endl;

    return 0;
}
