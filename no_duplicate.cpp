#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// approch 1 using vector and sets 
vector<int> shownoduplicate(vector<int> input){
    vector<int> result;
    set<int> s;
    for(int i=0;i <input.size();i++){       // O(n) time and space
        if(s.find(input[i])==s.end()){
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    return result;
}

// approch 2 sorting and then comparing current value with previous value and if the values match we don't put it in the result array
vector<int> shownoduplicate_2(vector<int> input){
    vector<int> result;
    sort(input.begin(),input.end());
    result.push_back(input[0]);
    for(int i=1;i<input.size();i++){
        if(input[i] != input[i+1]){
            result.push_back(input[i]);
        }
    }
    return result;
}

int main(){
    vector<int> input(5);
    vector<int> result;
    input.push_back(123);
    input.push_back(123);
    input.push_back(12);
    input.push_back(23);
    input.push_back(34);
    input.push_back(34);

    // result = shownoduplicate(input);
    result = shownoduplicate_2(input);
    vector<int>::iterator it;
    for(it = result.begin() ; it != result.end() ; it++){
        cout<<*it<<endl;
    }
    return 0;
}