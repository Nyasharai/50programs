// to sort an array (quick sort)

#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pindex = s;
    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    int temp = arr[e];
    arr[e] = arr[pindex];
    arr[pindex] = temp;
    return pindex;
}

void quickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, (p - 1));
        quickSort(arr, (p + 1), e);
    }
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, (size - 1));
    cout << "After sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}