#include<iostream>
#include<string>
#include<string.h>
using namespace std;
char maxoccur(string s){
    int arr[26]={0};
    int num=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z'){
            num=ch-'a';
        }
        else{
             num=ch-'A';
        }
        arr[num]++;
    }
    int max=-1;int index=-1;
    for (int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    char finalans=index+'a';
    return finalans;
}
int main(){
    string s="tattiaa";
    cout <<s<<endl;
    //getline(cin,s);
    cout<<maxoccur(s);
}