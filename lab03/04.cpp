#include <iostream>
using namespace std;

const int ITEMS = 10;
const int DAYS = 10;
const int TOTAL = ITEMS * DAYS;


void UnitPrices(double unitPrice[]) {
    cout << "Enter unit prices for 10 items (0 to 1000):" << endl;
    for (int i = 0; i < ITEMS; i++) {
        for (int attempt = 0; attempt < 1; attempt++) {
            cout << "Item " << i + 1 << " price: ";
            cin >> unitPrice[i];
            if (unitPrice[i] < 0 || unitPrice[i] > 1000) {
                attempt--;
            }
        }
    }
}


void SalesQuantity(int salesQuantity[]) {
    cout << "\nEnter sales quantity for each item for 10 days (0 to 1000):" << endl;
    for (int i = 0; i < ITEMS; i++) {
        for (int j = 0; j < DAYS; j++) {
            int index = i * DAYS + j;
            for (int attempt = 0; attempt < 1; attempt++) {
                cout << "Item " << i + 1 << ", Day " << j + 1 << ": ";
                cin >> salesQuantity[index];
                if (salesQuantity[index] < 0 || salesQuantity[index] > 1000) {
                    attempt--;
                }
            }
        }
    }
}

void calculateSales(double unitPrice[], int salesQuantity[], double &totalSales, double &averageSalesQuantity) {
    int totalQuantity = 0;
    totalSales = 0;

    for (int i = 0; i < ITEMS; i++) {
        for (int j = 0; j < DAYS; j++) {
            int index = i * DAYS + j;
            totalQuantity += salesQuantity[index];
            totalSales += salesQuantity[index] * unitPrice[i];
        }
    }


    averageSalesQuantity = totalQuantity / (double)TOTAL;
}


int main() {
    double unitPrice[ITEMS];
    int salesQuantity[TOTAL];
    double totalSales = 0, averageSalesQuantity = 0;


    UnitPrices(unitPrice);
    SalesQuantity(salesQuantity);
    calculateSales(unitPrice, salesQuantity, totalSales, averageSalesQuantity);


    cout << "Total sales for 10 days: " << totalSales << endl;
    cout << "Average sales quantity per item per day: " << averageSalesQuantity << endl;

    return 0;
}
