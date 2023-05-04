// to perform radix sort

#include <iostream>
using namespace std;

int GetMax(int arr[], int size)
{
    int m = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    return m;
}

void CountingSort(int arr[], int size, int div)
{
    int output[size];
    int count[10] = {0};
    for (int i = 0; i < size; i++)
        count[(arr[i] / div % 10)]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 10; i--)
    {
        output[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int size)
{
    int m = GetMax(arr, size);
    for (int div = 0; m / div > 0; div *= 10)
    {
        CountingSort(arr, size, div);
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

    cout << "Before sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    radixSort(arr, size);
    cout << "After sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}