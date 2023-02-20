/*3.Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/

#include <iostream>

class Complex {
  private:
    double real;
    double imaginary;

  public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    friend Complex operator+(Complex const &c1, Complex const &c2) {
        return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }

    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imaginary << std::endl;
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}
