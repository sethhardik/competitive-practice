#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int> v(5);  // size 5 array

    // for(int i=0; i<v.size();i++){
    //     v[i] = i+1;
    // }

    // -----------------------------------------implementing with no initialization------------------------------------------
    vector<int> v;
    for(int i=0; i<5;i++){
        v.push_back(i+1);
    }

    vector<int>::iterator it;  // initializing an iterator

    for(it = v.begin() ; it != v.end() ; it++){        // begin points at first position and end at next position of last element of vector
        cout<<*it<<endl;   // * to print the elements
    }

    return 0;
}