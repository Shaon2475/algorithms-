#include <iostream>
using namespace std;

struct Customer {
    string name, nid, occupation;
    int age;
    double balance;
};double calculateBalance(double balance, double rate, int months) {
    double result = balance;
    for (int i = 0; i < months; i++) {
        result += result * rate;
    }
    return result;
}
void display(Customer c, double rate) {
    double annual_balance = calculateBalance(c.balance, rate, 12);
    double balance_10_years = calculateBalance(c.balance, rate, 120);
    cout << "Name: " << c.name <<endl;
    cout <<" NID: " << c.nid<<endl;
    cout << " Age: " << c.age<<endl;
    cout<< " Occupation: " << c.occupation << endl;
    cout << "Initial Balance: " << c.balance << endl;
    cout << "Annual Balance: " << annual_balance << endl;
    cout << "Balance after 10 years: " << balance_10_years << endl;
    cout<<endl;
    cout << "-------------------------------------------" << endl;
    cout<<endl;
}

int main() {
    Customer customers[10];
    double interest_rate = 0.065;

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for customer " << i + 1 << ":\n";
        cout << "Name: "; cin >> customers[i].name;
        cout << "NID: "; cin >> customers[i].nid;
        cout << "Age: "; cin >> customers[i].age;
        cout << "Occupation: "; cin >> customers[i].occupation;
        cout << "Initial Balance: "; cin >> customers[i].balance;
        cout<<endl;
    }

    for (int i = 0; i < 10; i++) {
        display(customers[i], interest_rate);
    }
    return 0;
}

