#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <ctime>
using namespace std;
int getRandomNumber(int n)
{
    return rand() % n;
}

void insertionSort(int arr[], int n)
{
    for (int i =1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    srand(time(0));
    int n;
    cout << "Enter the number of elements limit: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = getRandomNumber(100);
    }
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
