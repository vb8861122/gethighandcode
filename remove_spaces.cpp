#include<iostream>
#include<string>
using namespace std;
string remove_blank(string s){
    string temp="";
    int i=0;
    for (int j=0;j<s.length();j++){
        if(s[j]!=' '){
           temp.push_back(s[j]);
            
        }
    }
    return temp;
}
    /*while(i<s.length()){
        if(s[i]==' '){
           
            i++;
        }
        else{
             temp.push_back(s[i]);
            i++;
        }
      
    }
    return temp;

}*/
int main(){
    string s="Work is worship";
    cout<<s;
    cout<<remove_blank(s);

}