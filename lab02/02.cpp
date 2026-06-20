#include <iostream>
using namespace std;

bool IsSorted(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swap1 = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap1 = true;
            }
        }
            if (!swap1)
            break;
    }
}


int binarySearch(int arr[], int l, int r, int k) {
    while (l <= r) {
        int mid =l+(r - l) / 2;

        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}


int main() {
    int n, k;
    cout << "Enter the number of elements for array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    if (!IsSorted(arr, n)) {
        bubbleSort(arr, n);
        cout << "Array was not sorted .";
        cout<<"The sorted array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search: ";
    cin >> k;

    int result = binarySearch(arr, 0, n - 1, k);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
