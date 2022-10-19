#include<iostream>
#include<string>
using namespace std;
string reverseWords(string s) {
        int lastSpaceIndex = -1;
        int len = (int)s.size();
        for (int strIndex = 0; strIndex <= len; strIndex++) {
            if (strIndex == len || s[strIndex] == ' ') {
                int startIndex = lastSpaceIndex + 1;
                int endIndex = strIndex - 1;
                while (startIndex < endIndex) {
                    char temp = s[startIndex];
                    s[startIndex] = s[endIndex];
                    s[endIndex] = temp;
                    startIndex++;
                    endIndex--;
                }
                lastSpaceIndex = strIndex;
            }
        }
        return s;
    }
    void print(string s){
     int i=0;
    while(s[i]!='\0'){
        cout<<s[i];
        i++;
    }
    
}
 

int main(){
    string s="my name is anthony gonsalves";
    int size=s.length();
    //int size=getlength(arr);
    s=reverseWords(s);
    cout<<size;
    print(s);
    return 0;
}