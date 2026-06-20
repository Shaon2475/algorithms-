#include <iostream>
using namespace std;

int main() {
    int A[6] = {9, 2, 7, 4, 1, 5};

    cout << "First half: ";
    for (int i = 0; i < 3; i++) {
        cout << A[i] << " ";
    }
    cout << "Second half: ";
    for (int i = 3; i < 6; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }}}


    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

