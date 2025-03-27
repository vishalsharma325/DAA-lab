#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int partition(int arr[], int a, int b) {
    int pivot = arr[b], i = a - 1;
    for (int j = a; j < b; j++)
        if (arr[j] < pivot)
        swap(arr[++i], arr[j]);
    swap(arr[i + 1], arr[b]);
    return i + 1;
}

void quickSort(int arr[], int a, int b) {
    if (a < b) {
        int pi = partition(arr, a, b);
        quickSort(arr, a, pi - 1);
        cout<<endl;
        cout<<"we are at "<<"a="<<a<<" b="<<pi<<" c="<<b<<endl;
        quickSort(arr, pi + 1, b);
        cout<<endl;
        cout<<"we are at "<<"a="<<a<<" b="<<pi<<" c="<<b<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n] ;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout<<"Given array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}