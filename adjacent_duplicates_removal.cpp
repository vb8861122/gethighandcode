#include<iostream>
#include<string>
using namespace std;
string adjacent_duplicate(string s){
    int arr1[26]={0};
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';
        arr1[index]++;
    }
    int i=0;
    string temp="";
    while(i<s.length()){
        int index=s[i]-'a';
        
        if (arr1[index]==1){
            temp.push_back(s[i]);

        }
        else{
            temp.push_back(s[i]);
             string ch=to_string(arr1[index]);
             temp=temp+ch;
        }
        //string ch=to_string(arr1[index]);
        //char ch1=char(ch);
       // temp=temp+ch;
        //cout<<ch;
        //temp.push_back(ch);
        i=i+arr1[index];
    }
    return temp;
}
int main(){
    string s="aaabbbbccccfdddde";
    string str=adjacent_duplicate(s);
    cout<<str;
    return 0;
}