#include <iostream>
using namespace std;

int main() {
    string X, Y;
    cout << "Enter first sequence: ";
    cin >> X;
    cout << "Enter second sequence: ";
    cin >> Y;

    int m = X.length();
    int n = Y.length();
    int d[100][100];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                d[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                d[i][j] = d[i - 1][j - 1] + 1;
            else
                d[i][j] = max(d[i - 1][j], d[i][j - 1]);
        }
    }

    cout << "Length of LCS: " << d[m][n] << endl;
}
