// to sort an array (selection sort)

#include <iostream>
using namespace std;

void swap(int *x1, int *x2){
    int temp = *x1;
    *x1= *x2;
    *x2=temp;
}

void selectionSort(int arr[], int n){
    int i, j, min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1; j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        swap(&arr[min], &arr[i]);

        }
    }

void print(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){
    int arr[] = {64,22,67,18,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array: ";
    print(arr,n);
    selectionSort(arr,n);
    cout<<"Sorted array: ";
    print(arr,n);
    return 0;
}