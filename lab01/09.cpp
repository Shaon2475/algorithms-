#include <iostream>
using namespace std;

bool isPalindrome(int num) {

    int originalNum = num;
    int reversedNum = 0;


    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << number << " is not a palindrome." << endl;
    }
    if (isPalindrome(number))
        {cout << number << " is a palindrome." << endl;}
    else
        {cout << number << " is not a palindrome." << endl;}

}

