#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    Complex operator-(const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.2, 3.8);
    cout << "First Complex number: ";
    c1.display();
    cout << "Second Complex number: ";
    c2.display();
    Complex sum = c1 + c2;
    cout << "\nSum: ";
    sum.display();
    Complex diff = c1 - c2; 
    cout << "Difference: ";
    diff.display();
    return 0;
}
