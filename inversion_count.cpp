#include<bits/stdc++.h>

using namespace std;

long long merge(int a[], int left, int mid, int right){
    int i= left, j=mid, k=0;
    int temp[right-left+1];
    long long count = 0;
    while(i<mid && j<=right){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            count += mid - i;
        }
    }
    while(i<mid){
        temp[k++] = a[i++];
    }
    while(j<=mid){
        temp[k++] = a[j++];
    }

    for(int i = left,k=0;i<=right;i++,k++){
        a[i] = temp[k];
    }
    return count;
}

long long merge_sort(int a[], int left, int right){
    long long count = 0;
    if(right>left){
        int mid = (right+left)/2;
        long long countleft = merge_sort(a,left,mid);
        long long countright = merge_sort(a,mid+1,right);
        long long allcount = merge(a,left,mid+1,right);

        return allcount+countleft+countright;
    }
    return count;
}

long long solve(int a[], int n ){
    long long ans = merge_sort(a,0,n-1);
    return ans;
}

int main(){
    int a[] = {5,4,2,3,1};
    cout<<"count : "<<solve(a,5);
    return 0;
}