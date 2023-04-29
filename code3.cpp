// to search an element is present in an array or not (binary search)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = 1 + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        else if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        else
            return binarySearch(arr, mid + 1, r, x);
    }
    else
        return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7};
    int x;
    cout << "Enter element to search in an array" << endl;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
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