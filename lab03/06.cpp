#include <iostream>
using namespace std;

const int items = 5;
const int days = 7;


void DailyProfit(double revenue[], double cost[], int sales[][items], double dailyProfit[]) {
    for (int i = 0; i < days; i++) {
        dailyProfit[i] = 0;
        for (int j = 0; j < items; j++) {
            dailyProfit[i] += sales[i][j] * (revenue[j] - cost[j]);
        }
    }
}


void WeeklyProfit(double dailyProfit[], double &totalProfit, double &averageProfit) {
    totalProfit = 0;
    for (int i = 0; i < days; i++) {
        totalProfit += dailyProfit[i];
    }
    averageProfit = totalProfit / days;
}

int main() {
    double revenue[items], cost[items];
    int sales[days][items];
    double dailyProfit[days], totalProfit, averageProfit;


    for (int i = 0; i < items; i++) {
        cout << "Enter revenue for item " << i + 1 << ": ";
        cin >> revenue[i];

        cout << "Enter cost for item " << i + 1 << ": ";
        cin >> cost[i];
    }


    cout << "Enter sales quantities for 7 days (each item per day): ";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ": ";
        for (int j = 0; j < items; j++) {
            cout << "  Sales of item " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }


    DailyProfit(revenue, cost, sales, dailyProfit);


    WeeklyProfit(dailyProfit, totalProfit, averageProfit);


    cout << "--- Daily Profit for Each Day ---";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ": " << dailyProfit[i] << endl;
    }

    cout << "-- Weekly Profit Summary ---";
    cout << "Total Weekly Profit: $" << totalProfit << endl;
    cout << "Average Daily Profit: $" << averageProfit << endl;

    return 0;
}
