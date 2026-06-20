#include <iostream>
using namespace std;


int linearSearch(int Arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (Arr[i] == k ) {
            return i;
        }
    }
    return -1;
}
bool IsSorted(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i + 1])
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


int binarySearch(int Arr[], int l, int r, int k) {
    while (l <= r) {
        int mid =l+r / 2;

        if (Arr[mid] == k)
            return mid;
        else if (Arr[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
int main() {
     int n, k, choice;
    cout << "Enter the number of elements for array: ";
    cin >> n;

    int Arr[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    cout << " Choose Search Method: 1 for Linear Search and 2 for Binary Search. "<<endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;


if (choice == 1) {
        cout << "Enter the element to search in array: ";
         cin >> k;

      int  found = linearSearch(Arr, n, k);
      if (found != -1)
       {
          cout << "Element found at index " <<found << endl;
       }
    else
        {
            cout << "Element not found" << endl;

        }}
 if (choice == 2) {
    if (!IsSorted(Arr, n)) {
        InsertionSort(Arr, n);
        cout << "Array was not sorted.   ";
        cout<<"The Sorted array is : ";
}
        for (int i = 0; i < n; i++) {
            cout << Arr[i] << " ";
        }
        cout << endl;

    cout << "Enter the element to search: ";
    cin >> k;

    int result = binarySearch(Arr, 0, n - 1, k);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
}


