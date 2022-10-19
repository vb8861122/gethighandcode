#include<iostream>
using namespace std;
void bubble_sort_asc(int arr[],int size){
    for(int i=0;i<size;i++){
        //cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<endl;
        cout<<"round"<<i<<endl;
        int min=arr[i];
        for(int j=0;j<size;j++){
            cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9]<<arr[10]<<endl;

            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9]<<arr[10]<<endl;
}
void bubble_sort_dsc(int arr[],int size){
    for(int i=0;i<size;i++){
        //cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<endl;
        cout<<"round"<<i<<endl;
        int min=arr[i];
        for(int j=0;j<size;j++){
           cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9]<<arr[10]<<endl;

            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9]<<arr[10]<<endl;
}

int main(){
    int arr[11]={0,5,7,4,2,3,11,9,13,1,19};
    bubble_sort_asc(arr,11);
    bubble_sort_dsc(arr,11);
    
    return 0;

}