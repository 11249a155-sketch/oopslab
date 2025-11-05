#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}
inline int square(int x) {
    return x * x;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "\nSum = " << add(num1, num2);
    cout << "\nSquare of first number = " << square(num1);
    cout << "\nSquare of second number = " << square(num2);
    cout << endl;
    return 0;
}
