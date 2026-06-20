#include <iostream>
using namespace std;

bool IsSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}



int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (!IsSorted(arr, n)) {
        InsertionSort(arr, n);
        cout << "Array was not sorted.   ";
        cout<<"The Sorted array is : ";
}
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
