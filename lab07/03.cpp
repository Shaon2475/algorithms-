#include <iostream>
using namespace std;

int main() {

    float a = 12, b = 34;
    float c = 24, d = 98;


    float det = a * d - b * c;

    if (det == 0) {
        cout << "Matrix is singular, no inverse exists." << endl;
    } else {

        cout << "Inverse of the matrix: ";
        cout <<  d / det << " " << -b / det << endl;
        cout << -c / det << " " <<  a / det << endl;
    }

    return 0;
}

