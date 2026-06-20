#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;
    int sum = 0;
    int max = arr[0];
    int min = arr[0];
    int duplicates = 0;


    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicates++;
                break;
    }}}
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << (float)sum / n << endl;
    cout << "Total duplicate elements: " << duplicates << endl;

    return 0;
}
