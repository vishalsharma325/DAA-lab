#include <iostream>
#include <ctime>
using namespace std;
const int MAX = 1000; 
int dp[MAX][MAX];    
int LCS(string X, string Y) {
    int m = X.length(), n = Y.length();

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1])  
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  
        }
    }
    return dp[m][n];  
}
int main() {
   string X, Y;
   cout<<"Enter the first string : ";
   cin>>X;
   cout<<"Enter the second string : ";
   cin>>Y;
cout << "Length of LCS: " << LCS(X,Y) << endl;
    return 0;
}
