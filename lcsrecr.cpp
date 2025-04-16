#include <iostream>
#include <ctime>
#include <string>
#include <algorithm> 
using namespace std;
int LCS(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + LCS(X, Y, m - 1, n - 1);
    else
        return max(LCS(X, Y, m - 1, n), LCS(X, Y, m, n - 1));
}
int main()
{
    clock_t start;
    string X, Y;
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;
    start = clock();
    cout << "Length of LCS: " << LCS(X, Y, X.length(), Y.length()) << endl;

    start = clock() - start;
    cout << "Time taken: " << (float)start / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}