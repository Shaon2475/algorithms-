#include <iostream>
using namespace std;

double calculateSGPA(double gp[5]) {
    double total = 0;
    for (int i = 0; i < 5; i++) {
        if (gp[i] > 4.0) {
            cout << "Invalid grade entered. Grades should be 4.0 or less." << endl;
            gp[i] = 4.0;
        }
        total += gp[i];
    }
    double sgpa = total / 5;
    return (sgpa > 4.0) ? 4.0 : sgpa;
}

void displayStudentInfo(string name, string id, int age, string department, double sgpa) {
    cout << "Name: " << name <<endl;
    cout<< " ID: " << id <<endl;
    cout<< " Age: " << age <<endl;
    cout<< "Department: " << department << endl;
    cout << "SGPA: " << sgpa << endl;
    cout << "Eligible for 25% Waiver: " << (sgpa >= 3.75 ? "Yes" : "No") << endl;
    cout<<endl;
    cout << "-------------------------------------------" << endl;
}

int main() {
    string name[10], id[10], department[10];
    int age[10];
    double gp[10][5], sgpa[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << ": ";
        cout << "Name: ";
        cin >> name[i];
        cout << "ID: ";
         cin >> id[i];
        cout << "Age: ";
        cin >> age[i];
        cout << "Department: ";
        cin >> department[i];
        cout << "Enter grades for 5 courses (max 4.0 per course): ";
        double tempGP[5];
        for (int j = 0; j < 5; j++) {
            cin >> tempGP[j];
            if (tempGP[j] > 4.0) {
                cout << "Invalid grade entered. Setting grade to 4.0." << endl;
                tempGP[j] = 4.0;
            }}
        sgpa[i] = calculateSGPA(tempGP);}

    for (int i = 0; i < 10; i++) {
    displayStudentInfo(name[i], id[i], age[i], department[i], sgpa[i]);
    }
}

