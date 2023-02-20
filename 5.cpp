/*5.Consider following class Numbers
class Numbers

{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers.*/

#include<iostream>
using namespace std;

class Numbers {
    private:
        int x, y, z;
    public:
        Numbers(int a=0, int b=0, int c=0) {
            x = a;
            y = b;
            z = c;
        }
        Numbers operator-() {
            return Numbers(-x, -y, -z);
        }
        void display() {
            cout << "Numbers are: " << x << " " << y << " " << z << endl;
        }
};

int main() {
    Numbers n1(2, -4, 5), n2(-3, 6, -7);
    -n1;
    n1.display();
    -n2;
    n2.display();
    return 0;
}
