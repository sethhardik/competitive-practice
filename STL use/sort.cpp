#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;
struct interval{
    int st;
    int et;
};

bool compare(interval i1,interval i2){
    return i1.st > i2.st;   
}

int main(){
    // int arr[] = {1,3,2,5,7,6};
    // sort(arr,arr+6,greater<int>());        // greater<int> is used to sort in decreasing order
    // for(int i = 0; i<6;i++){
    //     cout<<arr[i]<<" ";
    // }
    interval arr[] = {{6,4},{4,6},{8,13},{3,4}};
    sort(arr,arr+4,compare);      // compare is bool returning function for sorting 
    for(int i=0;i<4;i++){
        cout<<arr[i].st<<" : "<<arr[i].et<<endl;
    }
    // we can also use binary search on ascending order sorted array
    // cout<<binary_search(arr,arr+6,8) will return 1 if value exist and 0 if value is not there
    
    // to find index of the value we want to search ----------use-------lower_bound returns pointer
    int arr1[] = {1,3,2,5,7,6};
    sort(arr1,arr1+6);        // greater<int> is used to sort in decreasing order
    for(int i = 0; i<6;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<lower_bound(arr1,arr1+6,2) - arr1;
    cout<<endl;

    cout<<upper_bound(arr1,arr1+6,2) - arr1;   // returns next higher number index
    cout<<endl;

    cout<<__gcd(3,6)<<endl;    // __gcd() returns greatest common decimal for 2 numbers

    int x = 10;
    int y = 12;
    swap(x,y);    // inbuilt in utility library
    cout<<x<<endl<<y<<endl;
    
    return 0;
}