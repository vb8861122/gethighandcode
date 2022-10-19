#include<iostream>
#include<string>
using namespace std;
bool checkequal(int arr1[26],int arr2[26])
{
    for (int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return 0;
        }        
    }
    return 1;
} 

bool permutations(string s1,string s2)
{
    int arr1[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        int index=s1[i]-'a';
        arr1[index]++;
    }
    int i=0;
    int arr2[26]={0};
    int windowsize=s1.length();
    while(i<windowsize)
    {
        int index=s2[i]-'a';
        arr2[index]++;
        i++;
    }
    for(int j=0;j<windowsize;j++){
                cout<<arr2[j];
             }
             cout<<endl;
             for(int j=0;j<windowsize;j++){
                cout<<arr1[j];
             }
             cout<<endl;
             
    if(checkequal(arr1,arr2))
        return 1;
    
        while(i<s2.length())
        {
            char newchar=s2[i];
            int index=newchar-'a';
            arr2[index]++;
            
            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            arr2[index]--;
             i++;
             
            if(checkequal(arr1,arr2))
                return 1;
           
        }

        return 0;
    
}
int main()
{
    string s="dabbabbcbababbccc";
    string s1="abdc";
    int ans=permutations(s1,s);
    cout<<ans;
    return 0;
}