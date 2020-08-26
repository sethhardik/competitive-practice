#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarysearch_recursion(int arr[],int l,int r, int x){
    if (r>=l){
        int mid = l+(r-1)/2;
        if (arr[mid]==x){
            return mid;
        }
        if (arr[mid]>x){
            return binarysearch_recursion(arr,l,mid-1,x);
        }
        return binarysearch_recursion(arr,mid+1,r,x);
    }
    return -1;
}
int binarysearch_iterate(int arr[], int l, int r, int x) { 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		if (arr[m] == x) 
			return m; 
		if (arr[m] < x) 
			l = m + 1; 
		else
			r = m - 1; 
	}  
	return -1; 
} 
int main(){
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 40; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    // int result = binarysearch_recursion(arr, 0, n - 1, x); 
    int result = binarysearch_iterate(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array "<<result : cout << "Element is present at index " << result; 
    return 0;
}