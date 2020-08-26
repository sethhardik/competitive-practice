#include<bits/stdc++.h>

using namespace std;

int balancedBTs(int h){
    if(h == 0 || h == 1){
        return 1;
    }
    int m = pow(10,9) + 7; // for modulo operations
    int x = balancedBTs(h-1);
    int y = balancedBTs(h-2);

    long res1 = (long)x*x;   // type casting and saving answer in long 
    long res2 = (long)x*y*2;  // type casting 2nd part of formula
    int ans1 = (int)(res1%m);
    int ans2 = (int)(res2%m);
    int ans = (ans1 + ans2)%m;
    return ans;
}

int main(){

    int h=8;
    cout<<balancedBTs(h)<<endl;

    return 0;
}