#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int l, int mid, int r){
    int i,j ,k;
    int n1 = mid-l+1;   // size of  temp array L
    int n2 = r-mid;     // size of temp array R
    int L[n1], R[n2];
    
    for(int i=0;i<n1;i++){    // putting values in temp array
        L[i] = arr[l+i];
    }
    for(int j=0;j<n2;j++){    // putting value in temp array
        R[j] = arr[mid+1+j];
    }
    i = 0;
    j = 0;
    k =l;         // storing at left of array
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){   // if right temp array value bigger 
            arr[k] = L[i];  // store in kth position value of Left array
            i++;
        }else{               // else store in kth pos value of right array
            arr[k] = R[j];
            j++;             
        }
        k++;
    }
    while(i<n1){               // storing the rest of the values if any
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){              // storing the rest of the values if any
        arr[k] = R[j];
        j++;
        k++;
    }
}

void print(int arr[], int size){           // function just to print the values 
    int i; 
    for (i = 0; i < size; i++) 
        cout<<arr[i]<<" "; 
    cout<<endl;
}

void mergesort(int arr[], int l, int r){
    if(l<r){       // check if left less than right
        int mid = l+(r-l)/2;    // calculate mid
        mergesort(arr,l,mid);   // split arr from left to mid in 2 parts
        mergesort(arr,mid+1,r);  // split arr from mid+1 to right in 2 parts
        merge(arr,l,mid,r);      // at the end of split we merge using basic merge function
    }
}
int main(){
    int arr[] = {12,11,13,5,6,7};
    int arr_size = 6;
    mergesort(arr,0,arr_size-1);
    print(arr,arr_size);
    return 0;
}