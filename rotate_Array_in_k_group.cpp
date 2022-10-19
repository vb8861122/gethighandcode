#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
void rotate(int arr[],int size,int val){
    int arr1[size];
    for(int i=0;i<size;i++){
        if(i+val<size){
            arr1[i+val]=arr[i];
        }
        else{
            arr1[(i+val)%size]=arr[i];
        }
    }
    print(arr1,6);
      
}
int main(){
    int arr[6]={1,3,5,7,13,16};
    print(arr,6);
    rotate(arr,6,2);
    return 0;
}