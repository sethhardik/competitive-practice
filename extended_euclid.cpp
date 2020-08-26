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

int main()
{
    int a = 16;
    int b = 10;
    triplet ans = gcdextension(a,b);
    cout<<"GCD is : "<<ans.gcd<<endl;
    cout<<"X : "<<ans.x<<endl;
    cout<<"y : "<<ans.y<<endl;
    return 0;
}