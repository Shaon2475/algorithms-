#include <iostream>

using namespace std;

void insertAndDelete(int arr[], int &s, int newItem) {

    arr[s] = newItem;
    s++;


    for (int i = 0; i < s - 1; i++) {
        arr[i] = arr[i + 1];
    }
    s--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int s = 5;

    int newItem = 6;
    insertAndDelete(arr, s, newItem);


    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

