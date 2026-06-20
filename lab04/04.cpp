#include <iostream>
using namespace std;

bool IsSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
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

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];
     L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i = 0, j = 0;

    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int binarySearch(int Arr[], int l, int r, int k) {
    while (l <= r) {
        int mid = (l + r) / 2;

        if (Arr[mid] == k)
            return mid;
        else if (Arr[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int linearSearch(int Arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (Arr[i] == k) {
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
        for (int i=0 ; i<n;i++)
        {
            cout<< i+1<<"Iteration: "<<arr[i]<<endl;
        } cout<<endl;
    }

}



void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
        cout<<endl;
        for (int i=0 ; i<n;i++)
        {
            cout<< i+1<<"Iteration: "<<arr[i]<<endl;
        } cout<<endl;
    }
}
void countingSort(int A[], int B[], int n, int k) {
    int C[k + 1];


    for (int i = 0; i <= k; i++) {
        C[i] = 0;
    }


    for (int j = 0; j < n; j++) {
        C[A[j]]++;
    }


    for (int i = 1; i <= k; i++) {
        C[i] += C[i - 1];
    }


    for (int j = n - 1; j >= 0; j--) {
        B[C[A[j]] - 1] = A[j];
        C[A[j]]--;
    }
}
int main() {
    int n, k, c, sc;
    int A[n], B[n];


    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int Arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    cout << "Choose Search Method: "<<endl;
    cout << "1. Linear Search"<<endl;
    cout << "2. Binary Search "<<endl;
    cout << "Enter your choice: ";
    cin >> c;

    if (c == 1) {

        int found = linearSearch(Arr, n, k);
        if (found != -1) {
            cout << "Element found at index " << found << endl;
        } else {
            cout << "Element not found" << endl;
        }
    }
     else if (c == 2) {

        if (!IsSorted(Arr, n)) {
            cout << " Array is not sorted! Please choose a sorting method first:"<<endl;
            cout << "1. Insertion Sort"<<endl;
            cout << "2. Quick Sort"<<endl;
            cout << "3. Merge Sort"<<endl;
            cout << "4. bubble Sort"<<endl;
            cout << "5. selection Sort"<<endl;
             cout << "6. Count Sort"<<endl;
            cout << "Enter your choice: ";
            cin >> sc;

            if (sc == 1) {
                InsertionSort(Arr, n);
                cout << "Array sorted using Insertion Sort. ";
            } else if (sc == 2) {
                quickSort(Arr, 0, n - 1);
                cout << "Array sorted using Quick Sort. ";
            } else if (sc == 3) {
                mergeSort(Arr, 0, n - 1);
                cout << "Array sorted using Merge Sort. ";
            }
            else if (sc == 4) {
                   bubbleSort(Arr, n);

                cout << "Array sorted using Bubble Sort. ";

            }else if (sc == 5) {
                  selectionSort(Arr, n);

                cout << "Array sorted using Selection Sort. ";

            }
            else if (sc == 6) {
                  for (int i = 0; i < n; i++) {

        if (A[i] > k) {
            k = A[i];
        }
    }
    countingSort(A, B, n, k);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
            }
            else {
                cout << "Invalid sorting choice.  ";
                return 0;
            }
        }
        cout << "Sorted Array: ";
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
    } else {
        cout << "Invalid search choice! ";
    }

}


