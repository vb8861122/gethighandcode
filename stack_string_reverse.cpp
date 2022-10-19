#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    char *arr;
    int size;
    int top;
    Stack(int sz){
        this->size=sz;
        arr=new char[size];
        top=-1;
    }
    void push(char ch){
        if(top<size){
            top++;
            arr[top]=ch;
            cout<<top;
        }
    }
    string reverse_stack(Stack &s1,string s){
        for (int i=0;i<s.length();i++){
            cout<<"pushing element"<<endl;
            char ch=s[i];
            s1.push(ch);
        }cout<<"pushing complete"<<top<<endl;
        string ans="";
        while(top!=-1){
            cout<<arr[top]<<endl;
            ans.push_back(arr[top]);
            top--;
        }
        cout<<"reverse string printed"<<endl;
        return ans;

    }
    void print(){
        while(top>0){
            cout<<"printing"<<endl;
            char ch=arr[top];
            cout<<ch<<" "<<top;
            top--;
        }
        cout<<"print complete"<<endl;
    }
    void peak(){
    cout<<arr[top]<<endl;;
}
};
int main(){
    Stack s(7);
    string str="vaibhav";
    //s.reverse_stack(s,str);
    string ans=s.reverse_stack(s,str);
    cout<<ans;
    return 0;
}