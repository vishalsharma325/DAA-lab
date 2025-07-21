#include <iostream>
using namespace std;

int knapsack(int capacity, int weight[], int profit[], int n) {
    int K[n + 1][capacity + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacity; j++) {
            if (i == 0 || j == 0)
                K[i][j]= 0;
            else if (weight[i - 1] <= j)
                K[i][j] = max(profit[i - 1] + K[i - 1][j - weight[i - 1]], K[i - 1][j]);
            else
                K[i][j] = K[i - 1][j];
        }
    }   

    return K[n][capacity];
}

int main(int argc, char const *argv[]) {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    int weight[n], profit[n];
    cout << "Enter the weights of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    cout << "Enter the profits of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> profit[i];
    }
    int capacity;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;
    cout << "The maximum profit is: " << knapsack(capacity, weight, profit, n);
    return 0;
}
