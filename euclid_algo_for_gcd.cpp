#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    // specail case
    if(a<b){
        return gcd(b,a);
    }
    // base case
    if(b ==0){
        return a;
    }
    // answer step
    return gcd(b,a%b);
}

int main()
{
    int a = 16;
    int b = 10;
    int ans = gcd(a,b);
    cout<<"GCD is : "<<ans;
    return 0;
}