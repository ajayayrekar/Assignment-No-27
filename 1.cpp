/*1.Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==*/

class Complex {
  private:
    double real;
    double imaginary;

  public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    Complex operator+(Complex const &c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex operator-(Complex const &c) {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    Complex operator*(Complex const &c) {
        return Complex(real * c.real - imaginary * c.imaginary,
                       real * c.imaginary + imaginary * c.real);
    }

    bool operator==(Complex const &c) {
        return (real == c.real && imaginary == c.imaginary);
    }
};
