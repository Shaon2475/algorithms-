#include <iostream>
using namespace std;

void MinimumNotes(int s) {
    int m;
    cout << "Enter the number of denominations: ";
    cin >> m;

    int c[m];
    cout << "Enter the denominations: ";
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    int sCount[m] = {0};

    for (int i = 0; i < m; i++) {
        if (s >= c[i]) {
            sCount[i] = s / c[i];
            s -= sCount[i] * c[i];
        }
    }
    cout << "Minimum notes required:" << endl;
    for (int i = 0; i < m; i++){
        if (sCount[i] > 0) {
            cout << c[i] << " Taka: " << sCount[i] << " notes" << endl;
        }}}

int main() {
    int s;
    cout << "Enter the amount: ";
    cin >> s;

    MinimumNotes(s);

}
