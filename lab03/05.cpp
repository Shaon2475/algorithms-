#include <iostream>
using namespace std;


void insertValues(int arr[], int &size, int firstValue, int lastValue) {

    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = firstValue;
    arr[size + 1] = lastValue;
    size += 2;
}


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, firstValue, lastValue, searchValue;


    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size + 2];


    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    cout << "Enter the value to insert at the first position: ";
    cin >> firstValue;
    cout << "Enter the value to insert at the last position: ";
    cin >> lastValue;


    insertValues(arr, size, firstValue, lastValue);
    cout << " array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Enter the value to search: ";
    cin >> searchValue;


    int foundIndex = linearSearch(arr, size, searchValue);


    if (foundIndex != -1) {
        cout << "Value found at index: " << foundIndex << endl;
    } else {
        cout << "Value not found in the array.";
    }
}

