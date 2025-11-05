#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name, designation;
    double basicSalary, hra, da, pf, tax, grossSalary, netSalary;
public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateSalary() {
        hra = 0.2 * basicSalary;     
        da = 0.1 * basicSalary;     
        pf = 0.08 * basicSalary;     
        tax = 0.05 * basicSalary;    

        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - (pf + tax);
    }
    void displayPaySlip() {
        cout << fixed << setprecision(2);
        cout << "\n------------------------------\n";
        cout << "        PAY SLIP              \n";
        cout << "------------------------------\n";
        cout << "Employee ID      : " << empID << endl;
        cout << "Employee Name    : " << name << endl;
        cout << "Designation      : " << designation << endl;
        cout << "------------------------------\n";
        cout << "Basic Salary     : " << setw(10) << basicSalary << endl;
        cout << "HRA (20%)        : " << setw(10) << hra << endl;
        cout << "DA (10%)         : " << setw(10) << da << endl;
        cout << "------------------------------\n";
        cout << "Gross Salary     : " << setw(10) << grossSalary << endl;
        cout << "PF (8%)          : " << setw(10) << pf << endl;
        cout << "Tax (5%)         : " << setw(10) << tax << endl;
        cout << "------------------------------\n";
        cout << "Net Salary       : " << setw(10) << netSalary << endl;
        cout << "------------------------------\n";
    }
};

int main() {
    Employee emp;

    cout << "=== Employee Pay Slip Generator ===\n\n";
    emp.getData();
    emp.calculateSalary();
    emp.displayPaySlip();

    return 0;
}
