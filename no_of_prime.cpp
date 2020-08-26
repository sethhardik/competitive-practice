#include<bits/stdc++.h>

using namespace std;

bool checkprime(int n){   // method runs with complexity of O(n root(n))
    int count = 0;
    for(int i=0; i*i<n;i++){
        if(n%i == 0){
            if(i*i == n){
                count +=1;
            }else{
                count+=2;
            }
        }
    }
    if(count==2){
        return true;
    }
    return false;
}

int main(){

    int n ;
    int count =0;
    cin>>n;
    for(int i=0;i<n;i++){
        if(checkprime(i) == true){
            count++;
        }
    }
    cout<<"count : "<<count<<endl;
    return 0;
}