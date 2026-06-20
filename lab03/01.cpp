#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}


int partition(int arr[], int p, int r) {
    int x = arr[r];
    int i = p - 1;

    for (int j = p; j < r; j++) {
        if (arr[j] <= x) {
            i++;

            int A = arr[i];
            arr[i] = arr[j];
            arr[j] = A;
        }
    }


    int A = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = A;

    return i + 1;
}

void quickSort(int arr[], int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}



int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    cout << "The array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    if (isSorted(arr, n)) {
        cout << "Array is already sorted." << endl;
    } else {
        quickSort(arr, 0, n - 1);


        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}

