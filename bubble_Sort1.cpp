#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        cout<<"round "<<i<<endl;
        for(int j=0;j<size-i-1;j++){
            print(arr,5);cout<<endl;
            if(arr[j]>arr[j+1]){
                
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[5]={1,9,7,8,5};
    bubble_sort(arr,5);
    print(arr,5);
    return 0;
}