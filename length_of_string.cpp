#include<iostream>
using namespace std;
int getlength(char arr[]){
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
void print(char arr[]){
     int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
    
}
int main(){
    char arr[50]="my name is anthony gonsalves";
    int ans=getlength(arr);
    cout<<"Length of the string is "<<ans;
    print(arr);
    return 0;
}