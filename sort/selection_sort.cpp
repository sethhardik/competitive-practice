#include<bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp; 
}

void selectionsort(int arr[], int n){   //Time Complexity: O(n2) as there are two nested loops
    int i,j,min_index;
    for(i=0;i<n;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index = j;
            }
        }
        swap(&arr[min_index],&arr[i]);
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
    selectionsort(arr,n);
    cout<<"Sorted Array: \n";
    printarray(arr,n);
    return 0;
}