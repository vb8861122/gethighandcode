#include<iostream>
#include<stack>
using namespace std;
/*class Stack{
    public:
    int size;
    int *arr;
    int top;
    Stack(int s){
        this->size=s;
        top=-1;
        arr=new int[size];
    }
    void push(int d){
        if(top<size){
            top++;
            arr[top]=d;
            
        }
    }
    }*/
    void delete_middle(stack<int> &stack,int count,int size){
        
        
        if(count==size){
            stack.pop();
            return;
        }
        int num=stack.top();
        stack.pop();
        //cout<<num;
        
        //mid=s.size()/2;
        //if(count<mid){
          //  count++;
            delete_middle(stack,count+1,size);
            //cout<<stack.top();
            

        //}
        //stack.pop();
        stack.push(num);
        //return s;
        //cout<<stack.top();

    }

int main(){
    stack<int> stack;
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    //stack.push(7);
    int count=0;
     //cout<<stack.top();
    int sz=stack.size();
    delete_middle(stack,count,sz);
    cout<<endl;
    cout<<stack.top()<<endl;
    stack.pop();
    cout<<stack.top()<<endl;
    stack.pop();
    cout<<stack.top()<<endl;;
    stack.pop();
    cout<<stack.top()<<endl;;
    stack.pop();
    cout<<stack.top()<<endl;;
    
    return 0;
}