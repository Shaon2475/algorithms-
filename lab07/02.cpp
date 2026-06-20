#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {{1, 2,6,8}, {3, 4,6,3}};
    int rows = 4, cols = 4;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++)
            sum += matrix[i][j];
        cout << "Row " << i << " = Sum: " << sum << ", Avg: " << sum / (float)cols << endl;
    }

    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++)
            sum += matrix[i][j];
        cout << "Column " << j << " = Sum: " << sum << ", Avg: " << sum / (float)rows << endl;
    }

    return 0;
}
