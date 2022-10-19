#include<iostream>
using namespace std;
bool possible(int arr[],int size,int m,int mid){
    int pages=0;
    int cnt=1;
    int i=0;
    while(i<size){
    if(pages<mid){
        
            pages+=arr[i];
            i++;
        }
        else{
            cnt++;
            
            if(cnt<=m || arr[i]>mid){
                return false;
            }
            else{
                pages=0;
                pages=arr[i];
                i++;
            }
            
        }
    }
    return true;
}
int book_allocate(int arr[],int size,int m){
    int s=0;
    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
    int end=sum;
    int mid=s+(end-s)/2;
    int ans;
    
    while(s<=end){
        if(possible(arr,size,m,mid)){
           ans=mid;
           end=mid-1;
            
        }
        else{
          s=mid+1;
        }
        mid=s+(end-s)/2;
        ans=mid;
    }
return end;

}
int main(){
    int arr[4]={10,20,30,40};
    int ans=book_allocate(arr,4,2);
    cout<<ans;
    return 0;
}
