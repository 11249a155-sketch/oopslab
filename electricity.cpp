#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    string customerName;
    int customerID;
    float units;
    float totalBill;

public:
    void input() {
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
        cout << "Enter Customer ID: ";
        cin >> customerID;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }
    void calculateBill() {
        if (units <= 100)
            totalBill = units * 1.20;
        else if (units <= 200)
            totalBill = (100 * 1.20) + (units - 100) * 2.00;
        else if (units <= 300)
            totalBill = (100 * 1.20) + (100 * 2.00) + (units - 200) * 3.00;
        else
            totalBill = (100 * 1.20) + (100 * 2.00) + (100 * 3.00) + (units - 300) * 5.00;
    }
    void display() const {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Customer ID   : " << customerID << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill    : Rs. " << totalBill << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    ElectricityBill bill;
    bill.input();
    bill.calculateBill()
    bill.display()
    return 0;
}
