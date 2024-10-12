// An operator which contain only one operand is known as unary operator overloading

// syntax using class function
// returntype operator symbol(argument1)

#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imag;

    public:
        // Constructor to initialize real and imaginary parts
        Complex(int r = 0, int i = 0) : real(r), imag(i) {}

        // Overload the + operator using a member function
        Complex operator+(const Complex& obj) {
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        // Function to display the complex number
        void display() const {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    // Adding two complex numbers using overloaded +
    Complex c3 = c1 + c2;

    // Display the result
    cout << "Sum: ";
    c3.display();

    return 0;
}
