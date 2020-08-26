#include<bits/stdc++.h>

using namespace std;

void makesieve(int n){
    bool isprime[n+1];
    for(int i=0;i<n;i++){      // initializing with default value as true 
        isprime[i]=true;
    }
    isprime[0] = false;
    isprime[1] = false;

    for(int i = 2; i*i<=n;i++){    //  optimization 1: start from 2 and iterate till root(n)
        if(isprime[i] == true){    // if index i is true then move forward
            for(int j=i*i;j<=n;j+=i){  // optimization 2: starting fixing false at multiple from j = i*i as before that is already done
                isprime[j] = false;     // putting value as false
            }
        }
    }
    // printing the values
    int count=0;
    for(int i =0;i<n;i++){
        if(isprime[i]==true){
            count++;
        }
    }
    cout<<"count of prime : "<<count<<endl;
}

int main(){
    makesieve(25);
    return 0;
}