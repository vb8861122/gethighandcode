#include<iostream>
using namespace std;
bool valid(char ch){
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return 1;
    }
    else{
        return 0;
    }

}
char tolowercase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch+'a'-'A';
    }
    else{
        return ch;
    }
}
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
/*char* newstring(char arr, int size){
    char arr1[100];
    int j=0;
    for(int i=0;i<size;i++){
        if(valid(arr[i])){
            arr1[j]=arr[i];
            j++;
        }

    }return arr1;
    
}*/
void check_palindrome(char arr[],int size){
    int s=0;
    char arr2[100];
    int j=0;
    for(int i=0;i<size;i++){
        if(valid(arr[i])){
            arr2[j]=arr[i];
            j++;
        }
        arr2[j]='\0';
    }
    int len2=getlength(arr2);
    int e=len2-1;
    cout<<len2<<endl;
    print(arr2);
    cout<<endl;
    while(s<=e){
        
        if(tolowercase(arr2[s])==tolowercase(arr2[e])){
        s++;
        e--;
        }
        else{
            cout<<"Not palindrome";
            return;
        }
        
    }cout<<"String is palindrome";
    //cout<<"reverse string is "<<print(arr);
}

int main(){
    char arr[50]="race @ ca$r";
    int size=getlength(arr);
    check_palindrome(arr,size);
    return 0;
}