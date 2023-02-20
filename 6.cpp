/*6.Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/

#include<iostream>
#include<cstring>
using namespace std;

class CString {
    private:
        char str[100];
    public:
        CString(const char s[100]="") {
            strcpy(str, s);
        }
        CString operator+(const CString& s2) {
            char temp[200];
            strcpy(temp, str);
            strcat(temp, s2.str);
            return CString(temp);
        }
        bool operator==(const CString& s2) {
            return (strcmp(str, s2.str) == 0);
        }
        void display() {
            cout << str << endl;
        }
};

int main() {
    CString s1("Hello"), s2("World"), s3("hello");
    CString s4 = s1 + s2;
    if(s1 == s3)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;
    s4.display();
    return 0;
}
