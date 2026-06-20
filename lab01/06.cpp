#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int sumOfPrimes(int start, int end) {
    int sum = 0;
    int count = 0;
    double average = 0.0;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i;
            count++;
        }
    }

    if (count > 0){
        average = double(sum) / count;

    cout << "Average of prime numbers between " << start << " and " << end << ": " << average << endl;}

    return sum;
}

int main() {
    int n = 100;
    int start = 1, end = n;
    cout << "Prime numbers: ";
    for (int i = 1; i <= n; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;

    int primeSum = sumOfPrimes(start, end);
    cout << "Sum of prime numbers between " << start << " and " << end << ": " << primeSum << endl;

    return 0;
}
