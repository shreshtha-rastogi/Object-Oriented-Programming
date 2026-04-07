#include <iostream>
#include <string.h>
using namespace std;

// Enum for months
enum Month { JAN=1, FEB/*2*/, MAR/*3*/, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

// Days in months for non-leap years
int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date {
private:
    int day, month, year;

    // Check leap year
    bool isLeapYear(int y) {
        return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
    }

    // Days in month considering leap year
    int getDaysInMonth(int m, int y) {
        if (m == 2 && isLeapYear(y)) return 29;
        return daysInMonth[m];
    }

public:
    // Default constructor
    Date() {
        day=01;
        month=01;
        year=2000;
    }

    // Input date
    void inputDate() {
        int choice;
        cout << "Choose date input format:\n";
        cout << "1. dd/mm/yyyy\n2. dd-mm-yyyy\n3. dd-mon-yyyy (e.g. 05-Feb-2026)\n4. dd.mm.yyyy\n";
        cout<<"Enter your choice:"<<endl;
        cin >> choice;

        if (choice == 1) {
            char sep;
            cout << "Enter date (dd/mm/yyyy): ";
            cin >> day >> sep >> month >> sep >> year;
        }
        else if (choice == 2) {
            char sep;
            cout << "Enter date (dd-mm-yyyy): ";
            cin >> day >> sep >> month >> sep >> year;
        }
        else if (choice == 3) {
            string mon;
            char sep;
            cout << "Enter date (dd-mon-yyyy): ";
            cin >> day >> sep ;
            cin>> mon;
            cin>> sep >> year; 

            if (mon == "JAN") month = 1;
            else if (mon == "FEB") month = 2;
            else if (mon == "MAR") month = 3;
            else if (mon == "APR") month = 4;
            else if (mon == "MAY") month = 5;
            else if (mon == "JUN") month = 6;
            else if (mon == "JUL") month = 7;
            else if (mon == "AUG") month = 8;
            else if (mon == "SEP") month = 9;
            else if (mon == "OCT") month = 10;
            else if (mon == "NOV") month = 11;
            else if (mon == "DEC") month = 12;
            else {
                cout << "Invalid month! Using January.\n";
                month = 1;
            }
        }
        else if (choice == 4) {
            char sep;
            cout << "Enter date (dd.mm.yyyy): ";
            cin >> day >> sep >> month >> sep >> year;
        }
        else {
            cout << "Invalid choice! Using default date.\n";
        }
    }

    // Display date in dd-mm-yyyy format
    void displayDate() {
        cout << (day < 10 ? "0" : "") << day << "-"
             << (month < 10 ? "0" : "") << month << "-"
             << year << endl;
    }

    // Show number of days in month
    void daysInThisMonth() {
        cout << "Days in month " << month << " of year " << year << ": "
             << getDaysInMonth(month, year) << endl;
    }

    // Prefix ++
    Date operator++() {
        day++;
        if (day > getDaysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Postfix ++
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }

    // Prefix --
    Date operator--() {
        day--;
        if (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day = getDaysInMonth(month, year);
        }
        return *this;
    }

    // Postfix --
    Date operator--(int) {
        Date temp = *this;
        --(*this);
        return temp;
    }
};

int main() {
    Date d;
    d.inputDate();

    cout << "\nEntered Date: ";
    d.displayDate();

    cout << "\nIncrementing date (prefix ++): ";
    ++d;
    d.displayDate();

    cout << "Decrementing date (prefix --): ";
    --d;
    d.displayDate();

    cout << "\nIncrementing date (postfix ++): ";
    d++;
    d.displayDate();

    cout << "Decrementing date (postfix --): ";
    d--;
    d.displayDate();

    cout << "\nDays in the month: ";
    d.daysInThisMonth();

    return 0;
}