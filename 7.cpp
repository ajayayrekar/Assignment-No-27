/*7.7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output-*/

class fraction {
    long numerator;
    long denominator;
public:
    fraction(long n = 0, long d = 1) : numerator(n), denominator(d) {}
    fraction operator++() { // prefix increment operator
        numerator += denominator;
        return *this;
    }
    fraction operator++(int) { // postfix increment operator
        fraction temp(*this);
        numerator += denominator;
        return temp;
    }
    friend ostream& operator<<(ostream& out, const fraction& f) {
        out << f.numerator << "/" << f.denominator;
        return out;
    }
    friend istream& operator>>(istream& in, fraction& f) {
        in >> f.numerator >> f.denominator;
        return in;
    }
};


