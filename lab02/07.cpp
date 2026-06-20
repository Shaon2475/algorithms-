#include <iostream>
using namespace std;

void LeftDiagonal(int arr[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i][i];
    }
    double average = double(sum) / size;
    cout << "Sum of Main Diagonal: " << sum << endl;
    cout << "Average of Main Diagonal: " << average << endl;
}

void RightDiagonal(int arr[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i][size - 1 - i];
    }
    double average = double(sum) / size;
    cout << "Sum of Secondary Diagonal: " << sum << endl;
    cout << "Average of Secondary Diagonal: " << average << endl;
}

int main() {
    int size, c;
    cout << "Enter the size of the square matrix (n*n): ";
    cin >> size;

    if (size <= 0 || size > 10) {
        cout << "Invalid size! Please enter a size between 1 and 10." << endl;
        return 0;
    }

    int arr[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }
     for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }







    cout << "Choose the diagonal to calculate: 1 for Left Diagonal and 2 for Right." << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> c;

    if (c == 1) {
        LeftDiagonal(arr, size);
    } else if (c == 2) {
        RightDiagonal(arr, size);
    } else {
        cout << "Invalid choice for this program!" << endl;
    }

    return 0;
}
