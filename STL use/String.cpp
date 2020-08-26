#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "Hardik Seth";
    string s1(s,2,4);      // create same string as s starting from 2nd char and going till 4 length
    cout<<s<<endl<<s1<<endl;    
    // substring
    string s2 = s.substr(2,4); // same as above done for s1
    cout<<s2<<endl;
    if(s1.compare(s2) == 0){
        cout<<s1<<" is equal to "<<s2<<endl;
    }
    else{
        cout<<s1<<" is not equal to "<<s2<<endl;
    }
    return 0;
}