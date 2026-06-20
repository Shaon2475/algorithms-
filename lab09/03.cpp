#include <iostream>
using namespace std;

const int Max = 10;


void MatrixChainOrder(int d[], int n) {

int M[Max][Max], S[Max][Max];
for (int i = 1; i <= n; i++)
    M[i][i] = 0;
for (int len = 2; len <= n; len++) {
    for (int i = 1; i <= n - len + 1; i++) {
    int j = i + len - 1;
    M[i][j] = 100000;
        for (int k = i; k <= j - 1; k++) {
        int q = M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j];
        if (q < M[i][j]) {
        M[i][j] = q;
        S[i][j] = k;
cout << "M[" << i << "][" << j << "] = " << M[i][j] << endl;
}}}}
  cout<<endl;
    cout << "Minimum number of multiplications: " << M[1][n] << endl;
    cout << endl;
}

int main() {
    int d[] = {40, 20, 30, 10, 30, 50};
    int n = 5;
    MatrixChainOrder(d, n);
    return 0;
}

