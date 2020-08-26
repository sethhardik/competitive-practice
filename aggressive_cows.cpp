// basically an use case problem for binary search

#include<bits/stdc++.h>

using namespace std;

bool check(long long position[], int stall, int cow, long long mid){
    int count = 1;
    long long last_position = position[0];
    for(int i=1;i<stall;i++){
        if(position[i]-last_position >=mid){
            last_position = position[i];
            count++;
        }
        if(count==cow){
            return true;
        }
    }
    return false;
}

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c;
        cin>>n>>c;
        long long position[n];
        for(int j=0;j<n;j++){
            cin>>position[j];
        }
        sort(position,position+n);
        long long start = 0;
        long long end = position[n-1] - position[0];
        long long ans = -1;
        while (start<=end)
        {
            long long mid = start + (end - start)/2;
            if(check(position,n,c,mid)){
                ans = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}