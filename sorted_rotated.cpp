#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int sorted_rotate(int arr[],int size){
    //int arr1[size];
    int min=arr[0];
    int minindex=0;
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            minindex=i;
        }
          } 
          //cout<<minindex; 
           int flag=-1; 
           int cnt=0;
           int j=minindex;
    while(cnt<size-1){
       
        if(j<size){
            if(j+1<size){
                if ((arr[j]<=arr[j+1])){
                flag=1;
                cnt++;
                j++;
                }
                else{
                flag=0;
                break;
                }
            }
            else{
                if ((arr[j]<=arr[(j+1)%size])){
                   // cout<<"hello";
                flag=1;
                cnt++;
                j++;
            }
            else{
                flag=0;
                break;
                }
            }
                
            }
        
        
        else{
            if (arr[(j)%size]<=arr[(j%size)+1]){
                flag=1;
                cnt++;
                j++;
            }
            else{
                flag=0;
                break;
                
            }
          
        }
       
        
    } 
    //cout<<cnt;
    return flag;   
}
int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5);
    int ans= sorted_rotate(arr,5);
    cout<<ans;
    return 0;
}