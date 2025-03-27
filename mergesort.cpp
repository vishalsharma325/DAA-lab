#include <iostream>
using namespace std;
void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[q + 1 + j];
    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(arr, p, q);
        cout << "we are at " << "p=" << p << " q=" << q << " r=" << r << endl;
        mergesort(arr, q + 1, r);
        cout << "we are at " << "p=" << p << " q=" << q << " r=" << r << endl;
        merge(arr, p, q, r);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergesort(arr, 0, arr_size - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}