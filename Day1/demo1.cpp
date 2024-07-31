#include <iostream>
using namespace std;
class Complex {
    public:
    float real, imaginary;
        Complex(float real, float im) : real(real), imaginary(im) {}
        Complex operator+(const Complex& other){
            return Complex(real+other.real, imaginary+other.imaginary);
        }
};

int main() {
    Complex c1 = Complex(4,5);
    Complex c2 = Complex(6,6);
    Complex result = c1 + c2;
    cout << result.real << "+" << result.imaginary << "i";
    return 0;
}