// to find an element is present in an array or not (linear search)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7};
    int x;
    cout << "Enter element to search in an array" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    if (result == -1)
    {
        cout << "Element is not present in an array" << endl;
    }
    else
    {
        cout << "Element is present in an array at index " << result << endl;
    }
    return 0;
}