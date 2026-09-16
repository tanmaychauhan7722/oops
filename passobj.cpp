#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    // Takes objects as arguments and returns a Complex object.
    Complex add(Complex c1, Complex c2) {
        Complex result;

        result.real = c1.real + c2.real;
        result.imaginary = c1.imaginary + c2.imaginary;

        return result;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(2, 3);

    Complex c3;

    c3 = c3.add(c1, c2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}