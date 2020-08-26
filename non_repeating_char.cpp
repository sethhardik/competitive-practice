/* problem statement: First non repeating character
        in a given string, find the first non repeating character. you are given a string that can contain repeating characters.
        Your task is to return the first character in this string that does not repeat i.e. occurs exactly once. The string will contain 
        charcters only in English.if no repeating character print first char of string
*/
#include<iostream>
#include<cstring>
#include<map>

using namespace std;

char nonrepeating(string str){
    map<char,int> frequency;    // map to store frequency of the character
    for(int i=0;i<str.length();i++){
        char currentchar = str[i];
        frequency[currentchar]++;
    }
    for(int i=0;i<str.length();i++){
        if(frequency[str[i]]==1){
            return str[i];
        }
    }
    return str[0];
}
int main(){
    char result;
    string s = "abccdbae";
    // cout<<s;
    result = nonrepeating(s);
    cout<<result;
    return 0;
}