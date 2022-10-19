#include<iostream>
#include<string>
#include<vector>
using namespace std;
string adjacent_duplicates(string s){
    int i=0;
    int ansindex=0;
    int n=s.length();
    while(i<n){
        int j=i+1;

        while(s[j]==s[i]){
            j++;
        }
        s[ansindex++]=s[i];
        int count=j-i;
        if(count>1){
            string cnt=to_string(count);
            for (int k=0;k<cnt.length();k++){
                s[ansindex++]=cnt[k];
            }
        }
        i=j;

    }
    return s;
}
int main(){
    string s="aaaaaaaaaabbbbbbbcccccddddeffghhhh";
    cout<<adjacent_duplicates(s);
    return 0;
}