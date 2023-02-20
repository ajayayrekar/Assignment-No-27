/*4.Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/

#include<iostream>
using namespace std;

class Time {
    private:
        int hours, minutes, seconds;
    public:
        Time(int h=0, int m=0, int s=0) {
            hours = h;
            minutes = m;
            seconds = s;
        }
        friend bool operator==(const Time& t1, const Time& t2);
        friend istream& operator>>(istream& is, Time& t);
        friend ostream& operator<<(ostream& os, const Time& t);
};

bool operator==(const Time& t1, const Time& t2) {
    return (t1.hours == t2.hours && t1.minutes == t2.minutes && t1.seconds == t2.seconds);
}

istream& operator>>(istream& is, Time& t) {
    is >> t.hours >> t.minutes >> t.seconds;
    return is;
}

ostream& operator<<(ostream& os, const Time& t) {
    os << t.hours << ":" << t.minutes << ":" << t.seconds;
    return os;
}

int main() {
    Time t1, t2;
    cout << "Enter the first time (hh:mm:ss): ";
    cin >> t1;
    cout << "Enter the second time (hh:mm:ss): ";
    cin >> t2;
    if(t1 == t2)
        cout << "The times are the same." << endl;
    else
        cout << "The times are different." << endl;
    cout << "Time 1 is: " << t1 << endl;
    cout << "Time 2 is: " << t2 << endl;
    return 0;
}
