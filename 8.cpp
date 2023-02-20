/*8.Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -*/

class Matrix {
    int a[3][3];
public:
    Matrix() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] = 0;
            }
        }
    }
    Matrix operator-() {
        Matrix temp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                temp.a[i][j] = -a[i][j];
            }
        }
        return temp;
    }
    // other methods
};
