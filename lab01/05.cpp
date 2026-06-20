#include <iostream>
using namespace std;


double calculateBalance(double initial_balance, double interest, int years) {
    return initial_balance * (1 + (interest / 100)* years);
}

void AnnualBalance(double initial_balance, double interest_rate, int years) {
    cout << "Year"<<"    Balance" << endl;

    for (int i = 1; i <= years; i++) {
        double balance = calculateBalance(initial_balance, interest_rate, i);
        cout << i << "      " << balance << endl;
    }
}


int main() {
    double initial_balance = 100000;
    double interest = 6.5;
    int years = 6;


    AnnualBalance(initial_balance,interest , years);


    double final_balance = calculateBalance(initial_balance, interest, years);
    cout<<endl;
    cout << "Balance after " << years << " years: " << final_balance << endl;

    return 0;
}

