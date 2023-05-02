// to sort an array (insertion sort)

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, value;
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: ";
    print(arr, n);
    insertionSort(arr, n);
    cout << "Sorted array: ";
    print(arr, n);
    return 0;
}