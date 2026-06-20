#include <iostream>
using namespace std;
int main() {
     int n = 6;
     int W = 15;

int weight[n + 1] = {0, 3, 1, 2, 4, 5, 6};
int value[n + 1]  = {0, 2, 4, 5, 5, 7, 8};

int dp[n + 1][W + 1];

// Initialize dp table
for (int i = 0; i <= n; i++)
for (int w = 0; w <= W; w++)
dp[i][w] = 0;

//dp table
for (int i = 1; i <= n; i++) {
for (int w = 0; w <= W; w++) {
if (weight[i] <= w)
    dp[i][w] = (dp[i - 1][w - weight[i]] + value[i] > dp[i - 1][w]) ?
        dp[i - 1][w - weight[i]] + value[i] : dp[i - 1][w];
else dp[i][w] = dp[i - 1][w];}}

    // Print final DP table
cout << "Final DP Table: "<<endl;
for (int w = 0; w <= W; w++)
cout << w << "  ";
cout<<endl;
cout << "  ------------------------------------------------------------- "<<endl;
for (int i = 0; i <= n; i++) {
    cout << "I" << i << " | ";
for (int w = 0; w <= W; w++)
cout << dp[i][w] << " ";
    cout << endl;
}
//  to find selected items
int w = W;
int totalWeight = 0;
cout << "Selected items to maximize value:"<<endl;
for (int i = n; i > 0 && w > 0; i--) {
if (dp[i][w] != dp[i - 1][w]) {
    cout << "Item " << i << " (Weight: " << weight[i] << "kg, Value: " << value[i] << ") ";
    totalWeight += weight[i];
    w -= weight[i];
}cout<<endl;
}

cout << "Maximum value that can be taken in the knapsack: " << dp[n][W] << endl;
cout << "Total weight used in knapsack: " << totalWeight << "kg out of " << W;
cout<<endl;
}
