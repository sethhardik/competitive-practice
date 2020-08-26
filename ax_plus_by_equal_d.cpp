#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

class triplet{
public:
    ll gcd;
    ll x;
    ll y;

};

triplet gcdextension(ll a, ll b ){

    // base case
    if (b == 0){
        triplet myans;
        myans.gcd = a;
        myans.x = 1;
        myans.y = 0;
        return myans;
    }
    triplet smallans = gcdextension(b,a%b);

    // extended euclid
    triplet myans;
    myans.gcd = smallans.gcd;
    myans.x = smallans.y;
    myans.y = (smallans.x - ((a/b)*(smallans.y)));
    return myans;
}

ll modinverse(ll A, ll M){
    ll x = gcdextension(A,M).x;
    return (x%M +M) %M;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,d;
        cin>>a>>b>>d;
        ll g = __gcd(a,b);
        if(d%g){
            cout<<0<<endl;
            continue;
        }
        if(d==0){
            cout<<1<<endl;
            continue;
        }
        a/=g;
        b/=g;
        d/=g;
        ll y1 = ((d%a) * modinverse(b,a))%a;
        ll firstvalue = d/b;
        if(d<y1*b){
            cout<<0<<endl;
            continue;
        }
        ll n = (firstvalue - y1)/a;
        ll ans = n+1;
        cout<<ans<<endl;

    }
    return 0;
}