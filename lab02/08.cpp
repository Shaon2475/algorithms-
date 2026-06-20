#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int &max, int &min) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
}

int countDuplicates(int arr[], int n) {
    int duplicateCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;
            }
        }
    }
    return duplicateCount;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];
    findMaxMin(arr, n, max, min);

    int sum = max + min;
    float average = sum / 2.0;
    int duplicateCount = countDuplicates(arr, n);
      cout<<endl;
    cout << "Maximum Value: " << max << endl;
    cout<<endl;
    cout << "Minimum Value: " << min << endl;
    cout<<endl;
    cout << "Sum of Maximum and Minimum: " << sum << endl;
    cout<<endl;
    cout << "Average of Maximum and Minimum: " << average << endl;
    cout<<endl;
    cout << "Total Duplicate Elements in given array is: " << duplicateCount << endl;


}


