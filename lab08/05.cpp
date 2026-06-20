#include <iostream>
#include <climits>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int arr[r][c];
    int duplicateCount = 0;

    cout << "Enter elements of the 2D array: " << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> arr[i][j];
        }
    }
    int maxElem = arr[0][0], minElem = arr[0][0];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (arr[i][j] > maxElem) {
            maxElem = arr[i][j];
        }
            if (arr[i][j] < minElem) {
                minElem = arr[i][j];
}
}
}


    int sum = maxElem + minElem;
    float average = sum / 2.0;

    for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
        for (int x = i; x < r; ++x) {
        for (int y = 0; y < c; ++y) {
        if ((x == i && y > j) || (x > i)) {
        if (arr[i][j] == arr[x][y]) {
        duplicateCount++;
    }}}}}}
    cout << "Maximum element: " << maxElem << endl;
    cout << "Minimum element: " << minElem << endl;
    cout << "Sum of max and min elements: " << sum << endl;
    cout << "Average of max and min elements: " << average << endl;
    cout << "Total number of duplicate elements: " << duplicateCount << endl;

}

