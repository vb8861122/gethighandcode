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
void reverse(char arr[],int len){
    int s=0;
    int e=len-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    //cout<<"reverse string is "<<print(arr);
}

int main(){
    char arr[50]="my name is anthony gonsalves";
    int length=getlength(arr);
    cout<<"Original string is "<<endl;
    print(arr);
    cout<<endl;
    reverse(arr,length);
    cout<<"reverse string is "<<endl;
    print(arr);
    return 0;
}