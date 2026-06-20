#include <iostream>
using namespace std;

bool isLeapYear(int year) {

    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear, endYear;
    cout << "Enter the a starting year: ";
    cin >> startYear;
    cout << "Enter the an ending year: ";
    cin >> endYear;


    if (startYear > endYear) {
        cout << "Sorry it's invalid entry! Start year should be less than or equal to end year." << endl;

    }

    bool LeapYear = false;

    cout << "Leap years between " << startYear << " and " << endYear << " are: " << endl;
    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
                LeapYear = true;
            cout << year << "  "<<endl;

        }
    }

    if (!LeapYear) {
        cout << "No leap years found between given years ." << endl;
    } else {
        cout << endl;
    }

}

