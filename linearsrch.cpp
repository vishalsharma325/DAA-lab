#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
   int arr[8];
   cout<<"Enter the elements of the array :" ;
   for (int i = 0; i < 8; i++)
   {
    cin>>arr[i];
   }
    int size = 8;
    cout<<"enter the key to be searched :";
    int key;
    cin>>key;
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}