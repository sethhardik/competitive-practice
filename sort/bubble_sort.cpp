#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp; 
}

void bubblesort(int arr[], int n){   // complexity O(n^2)
    int i , j ;
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void optimized_bubblesort(int arr[], int n){
    int i,j;
    bool swapped;
    for (i=0;i<n-1;i++){
        swapped = false;
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(swapped == false){
            break;
        }
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
    optimized_bubblesort(arr,n);
    cout<<"Sorted Array: \n";
    printarray(arr,n);
    return 0;
}