#include<bits/stdc++.h>
using namespace std;

# define MAX 500001
#define MOD 1000000007
typedef long long ll;

vector<int>* sieve(){
    
    bool isprime[MAX];
    vector<int>* v = new vector<int>();
    for(int i=2;i<=MAX;i++){
        isprime[i] = true;
    }
    for(int i=2;i*i<=MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<=MAX;j++){
                isprime[j] = false;
            }
        }
    }
    v->push_back(2);
    for(int i=3;i<=MAX;i++){
        if(isprime[i]){
            v->push_back(i);
        }
    }
    return v;
}

ll divisor(int n, vector<int>* &primes){
    ll result = 1;
    for(int i =0;primes->at(i)<=n;i++){
        int k = primes->at(i);
        long long count = 0;
        while((n/k) != 0){
            count = (count + n/k)%MOD;
            k = k*primes->at(i);

        }
        result = (result * ((count+1)%MOD))%MOD;
    }
    return result;
}

int main()
{
    vector<int>* primes = sieve();
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        cout<<divisor(n,primes)<<endl;

    }
    return 0;
}