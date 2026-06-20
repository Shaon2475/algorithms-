#include <iostream>
using namespace std;

const int n = 3;

void transpose(int mat[n][n], int trans[n][n]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            trans[j][i] = mat[i][j];
}

void multiply(int mat1[n][n], int mat2[n][n], int res[n][n]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
}

int main() {
    int A[n][n] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[n][n] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int transA[n][n], transB[n][n], result[n][n];

    transpose(A, transA);
    transpose(B, transB);
    multiply(transA, transB, result);
    cout<<" Trans of A: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << transA[i][j] << " ";
        cout << endl;
    }
    cout<<" Trans of A: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << transB[i][j] << " ";
        cout << endl;
    }

    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}




