#include <iostream>
using namespace std;

int main() {
    int fib[20];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 20; i++) {
        fib[i] = fib[i-1] + fib[i-2];
}
cout << "Fibonacci Notes (20 terms):" << endl;
for (int i = 0; i < 20; i++) {
cout << fib[i] << " ";
}
cout << endl;

int amount = 357;
int count[20] = {0};
for (int i = 19; i >= 0; i--) {
if (fib[i] <= amount && fib[i] != 0) {
count[i] = amount / fib[i];
amount -= count[i] * fib[i];
}
}
cout << "Minimum notes required to pay 357 Taka:" << endl;
for (int i = 19; i >= 0; i--) {
if (count[i] > 0) {
cout << fib[i] << " Taka: " << count[i] << " notes" << endl;
}
}
if (amount > 0) {
cout << "Remaining amount that cannot be paid: " << amount << " Taka" << endl;
}
}

