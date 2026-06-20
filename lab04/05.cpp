#include <iostream>

using namespace std;


void insertMiddle(int arr[], int &n, int newE) {
    int mid = n / 2;
    for (int i = n; i > mid; i--) {
        arr[i] = arr[i - 1];
    }
    arr[mid] = newE;
    n++;
}


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main() {
    int n, newE, s;


    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n + 1];

    cout << "Enter  elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<endl;
    cout << "Enter the new element to insert in the middle: ";
    cin >> newE;
    cout<<endl;
    insertMiddle(arr, n, newE);
    cout << "Array after inserting new element: ";
    for (int i = 0; i < n; i++) {
        cout<< arr[i]<< " ";
    }cout<<endl;
    cout << "search before sorting: ";
    cin >> s;
     cout<<endl;
    int index = linearSearch(arr, n, s);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }


    bubbleSort(arr, n);


    cout << "Sorted array: ";
     for (int i = 0; i < n+1; i++) {
        cout<< arr[i]<<" ";
    }

     cout<<endl;
    cout << " search after sorting: ";
    cin >> s;
    index = linearSearch(arr, n, s);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }
}

