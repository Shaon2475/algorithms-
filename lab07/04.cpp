#include <iostream>
using namespace std;

int main() {
    int A[4] = {5, 2, 9, 1};
    int B[3] = {8, 3, 7};
    int C[7];

    for (int i = 0; i < 4; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < 3; i++) {
        C[4 + i] = B[i];
    }

    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
        if (C[j] > C[j + 1]) {
        int temp = C[j];
        C[j] = C[j + 1];
        C[j + 1] = temp;
        }}
}

    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++) {
        cout << C[i] << " ";
    }
    cout << endl;


    int key ;
    cout<<"Enter the finding number:";
    cin>>key;
    bool found = false;
    for (int i = 0; i < 7; i++) {
        if (C[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element " << key << " found!" << endl;
    else
        cout << "Element " << key << " not found!" << endl;

    return 0;
}

