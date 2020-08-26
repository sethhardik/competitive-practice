#include<bits/stdc++.h>

using namespace std;

class triplet{
public:
    int gcd;
    int x;
    int y;

};

triplet gcdextension(int a, int b ){

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

void modinverse(int A, int M){
    triplet ans = gcdextension(A,M);
    cout<<"Multiplicative Modulo inverse is : "<<ans.x<<endl;
}

int main()
{
    int a = 5;
    int m = 12;
    modinverse(a,m);

    return 0;
}