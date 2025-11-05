#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex add(Complex c2) {
        Complex result;
        result.real = real + c2.real;
        result.imag = imag + c2.imag;
        return result; 
    }
};
int main() {
    Complex c1, c2, sum;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "\nEnter second complex number:\n";
    c2.input();
    sum = c1.add(c2);
    cout << "\nSum of complex numbers = ";
    sum.display();
    return 0;
}
