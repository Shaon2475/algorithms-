#include <iostream>

using namespace std;

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
    int n, k = 0;


    cout << "Enter number of elements: ";
    cin >> n;

    int A[n], B[n];


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
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

