// to sort an array (bubble sort)

#include <iostream>
using namespace std;

void swap(int *arr, int x1, int x2)
{
    int temp = arr[x1];
    arr[x1] = arr[x2];
    arr[x2] = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

void print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {64, 22, 67, 18, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: ";
    print(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    print(arr, n);
    return 0;
}