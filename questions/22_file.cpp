#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Getter for real part
    double getReal() const {
        return real;
    }

    // Getter for imaginary part
    double getImag() const {
        return imag;
    }

    // Setter for real part
    void setReal(double r) {
        real = r;
    }

    // Setter for imaginary part
    void setImag(double i) {
        imag = i;
    }

    // Function to add two complex numbers
    Complex add(const Complex& c) const {
        Complex result(real + c.real, imag + c.imag);
        return result;
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex& c) const {
        Complex result(real - c.real, imag - c.imag);
        return result;
    }

    // Function to multiply two complex numbers
    Complex multiply(const Complex& c) const {
        Complex result(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
        return result;
    }

    // Function to divide two complex numbers
    Complex divide(const Complex& c) const {
        double denominator = c.real * c.real + c.imag * c.imag;
        Complex result((real * c.real + imag * c.imag) / denominator, (imag * c.real - real * c.imag) / denominator);
        return result;
    }

    // Function to display a complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.display();

    Complex difference = c1.subtract(c2);
    cout << "Difference: ";
    difference.display();

    Complex product = c1.multiply(c2);
    cout << "Product: ";
    product.display();

    Complex quotient = c1.divide(c2);
    cout << "Quotient: ";
    quotient.display();

    return 0;
}