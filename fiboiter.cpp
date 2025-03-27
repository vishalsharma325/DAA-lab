#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    clock_t start;
    start = clock();

    cout << "Fibonacci Series: ";
    fibonacci(n);
    cout << endl;

    start = clock() - start;
    cout << "Time taken: " << (float)start / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}