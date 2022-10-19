#include<iostream>
#include<vector>
#include<array>
using namespace std;
void print(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}
vector<int> reverse(vector<int> &arr1){
    int s=0;
    int e=arr1.size()-1;
    while(s<e){
        swap(arr1[s++],arr1[e--]);
    }
    return arr1;
}
/*int sizearray(int arr[]){
    int c=0;
    for(int i: arr)
   {
   		//cout<<i<<" ";
   		c++;
   }
   return c;
}*/
vector<int> sumarray(vector<int> &arr1,vector<int>&arr2){
    int size1=arr1.size();
    int size2=arr2.size();
    //int arr3[size1+size2];
    vector<int>arr3;
    int i=size1-1;
    int j=size2-1;
    int sum=0;
    int carry=0;
    while(i>=0 && j>=0){
        sum=arr1[i]+arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
       //arr3[i]
        i--;
        j--;
    }
    while(i>=0){
        sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
       //arr3[i]
        i--;
       
    }
     while(j>=0){
        sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
       //arr3[i]
        j--;
       
    }
    while(carry!=0){
        sum=carry;
        arr3.push_back(sum);
    }
    return arr3;
}
int main(){
    vector<int> arr1={1,2,3,4};
    print(arr1);
    cout<<endl;
    vector<int> arr2={6};
    print(arr2);
    cout<<endl;
    //int arr[]={1,2,3,4,5,6,7,8,9,0};
    vector<int> ans=sumarray(arr1,arr2);
    ans=reverse(ans);
    //int ans=sizearray(arr);
    //cout<<"\nThe length of the given Array is: "<<ans;
    print(ans);
    return 0;
    /*{
   int c;
   int arr[]={1,2,3,4,5,6,7,8,9,0};
   //cout<<"The array is: ";
   
   cout<<"\nThe length of the given Array is: "<<ans;
   
   return 0;*/
}
