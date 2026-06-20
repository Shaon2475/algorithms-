#include <iostream>
using namespace std;

int main() {
    string t= "madhuban";
    string w1 = "madhabi";
    string w2 = "madhurika";

    int m = t.length();
    int n1 = w1.length();
    int n2 = w2.length();

    int d1[100][100] = {0};

for (int i = 1; i <= m; i++) {
for (int j = 1; j <= n1; j++) {
if (t[i-1] == w1[j-1])
d1[i][j] = d1[i-1][j-1] + 1;
else
d1[i][j] = (d1[i-1][j] > d1[i][j-1]) ? d1[i-1][j] : d1[i][j-1];}}

int d2[100][100] = {0};
for (int i = 1; i <= m; i++) {
for (int j = 1; j <= n2; j++) {
if (t[i-1] == w2[j-1])
d2[i][j] = d2[i-1][j-1] + 1;
else
d2[i][j] = (d2[i-1][j] > d2[i][j-1]) ? d2[i-1][j] : d2[i][j-1];
}
}
int lcs1 = d1[m][n1];
int lcs2 = d2[m][n2];

cout << "LCS with " << w1 << ": " << lcs1 << endl;
cout << "LCS with " << w2 << ": " << lcs2 << endl;
if (lcs1 > lcs2)
cout << w1 << " is more similar to " << t << endl;
else if (lcs2 > lcs1)
cout << w2 << " is more similar to " << t << endl;
    else cout << "Both words are equally similar to " << t << endl;
}

