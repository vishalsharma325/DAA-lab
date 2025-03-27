#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

int fibonacci(int n) {
    cout << "Entering fibonacci(" << n << ")" << endl; 
    if (n == 1 || n == 0) {
        cout << "Returning " << n << " for fibonacci(" << n << ")" << endl;
        return n;
    }
    int result = fibonacci(n - 1) + fibonacci(n - 2); 
    cout << "Returning " << result << " for fibonacci(" << n << ")" << endl; 
    return result;
}

int main() {
    clock_t start;

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    start = clock();
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    start = clock() - start;
    cout << "Time taken: " << (float)start / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}