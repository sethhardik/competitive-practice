// Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced 
// in complete big array.

#include<bits/stdc++.h>

using namespace std;

void insertionsort(int arr[], int n){   //Time Complexity: O(n*2)
    int i, key, j;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void printarray(int arr[], int size){
    int i;
    for (i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    cout<<"Sorted Array: \n";
    printarray(arr,n);
    return 0;
}