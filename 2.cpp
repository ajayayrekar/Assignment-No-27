/*2. Write a C++ program to overload unary operators that is increment and decrement.*/

#include <iostream>

class Number {
  private:
    int n;

  public:
    Number(int n = 0) : n(n) {}

    Number operator++() {
        return Number(++n);
    }

    Number operator++(int) {
        return Number(n++);
    }

    Number operator--() {
        return Number(--n);
    }

    Number operator--(int) {
        return Number(n--);
    }

    void display() {
        std::cout << "n = " << n << std::endl;
    }
};

int main() {
    Number n1(5);
    ++n1;
    n1.display();
    n1++;
    n1.display();
    --n1;
    n1.display();
    n1--;
    n1.display();

    return 0;
}
