
#include <iostream>

using namespace std; 

class Date{
private:
    int month, day, year; 
public:
    Date(int, int, int);
    void display() {
        cout << month << "/" << day << "/" << year;
    }
    
    Date operator++() {
        ++month;
        return *this;
    }
    
    Date operator--() {
        --year;
        return *this;
    }

    Date operator++(int) {
        Date m(month, day, year);
        day++;
        return m;
    }

    Date operator--(int) {
        Date y(month, day, year);
        year--;
        return y;
    }
};


Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}




int main()
{
    Date d1(11, 26, 2001);
    d1.display();
    cout << endl;
    ++d1;--d1;
    d1.display();
    cout << endl;
    d1++;
    d1.display();
    cout << endl;
    d1--;
    d1.display();
    return 0;

}