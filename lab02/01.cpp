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

int main() {
    int n, k;
    cout << "Enter the number of Array elements: ";
    cin >> n;

    int Arr[n];
    cout << "Enter the elements for array: ";
    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    cout << "Enter the element to search in array: ";
    cin >> k;

    int found = linearSearch(Arr, n, k);
    if (found != -1)
       {
          cout << "Element found at index " <<found << endl;
       }
    else
        {
            cout << "Element not found" << endl;

        }

}

