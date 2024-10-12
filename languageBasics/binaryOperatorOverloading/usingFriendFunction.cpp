// syntax using friend function
// friend returntype operator symbol(argument1 , argument2)

#include <iostream>
using namespace std;

class Matrix {
    private:
        int value;

    public:
        // Constructor to initialize matrix value
        Matrix(int v = 0) : value(v) {}

        // Friend function to overload * operator
        friend Matrix operator*(const Matrix& m1, const Matrix& m2);

        // Display function
        void display() const {
            cout << "Matrix Value: " << value << endl;
        }
};

// Definition of friend function to overload *
Matrix operator*(const Matrix& m1, const Matrix& m2) {
    return Matrix(m1.value * m2.value);
}

int main() {
    Matrix mat1(5), mat2(10);

    // Multiply two matrix objects
    Matrix result = mat1 * mat2;

    // Display result
    cout << "Result of Multiplication: ";
    result.display();

    return 0;
}
