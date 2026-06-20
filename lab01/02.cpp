#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100!= 0)||(year % 400 == 0);
}

int calculateAgeInSeconds(int birthYear,int birthMonth,int birthDay,int currentYear,int currentMonth,int currentDay){
    int seconds = 0;

    for (int year = birthYear; year < currentYear; year++) {
        if (isLeapYear(year)){
            seconds += 366*24*3600;
        } else {
            seconds += 365*24*3600;
        }
    }
return seconds;
}

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;

    cout << "Enter your birth year, month, and day: ";
    cin >> birthYear >> birthMonth >> birthDay;
    cout<<endl;
    cout << "Enter the current year, month, and day: ";
    cin >>currentYear >> currentMonth >> currentDay;

    int ageInSeconds = calculateAgeInSeconds(birthYear,birthMonth,birthDay,currentYear,currentMonth,currentDay);

     cout << "Your age in seconds is: "<< ageInSeconds << " seconds." << endl;

    return 0;
}
