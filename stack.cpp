#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int top;
    int size;
    int *arr;
    Stack(int s){
        this->size=s;
        arr=new int[size];
        top=-1;
    }

void push(int d){
    if(top<size){
    top++;
    arr[top]=d;
    
    }
    else{
        cout<<"stack is overflow"<<endl;
    }

}
void pop(){
    if(top<1){
        cout<<"stack is underflow"<<endl;
    }else{
    top--;
    }
}
bool isempty(){
    if (top==-1){
        cout<<"stack is empty"<<endl;
        return true;
    }
    else{
        cout<<"stack is not empty"<<endl;
        return false;
    }
}
void peak(){
    cout<<arr[top]<<endl;;
}
};
int main(){
    Stack s(2);
    s.push(22);
    s.peak();
    s.push(42);
    s.peak();
    s.push(0);
    s.peak();
    s.push(20);
    s.peak();
    s.pop();
    s.peak();
    s.pop();
    s.peak();
    s.pop();
    s.peak();
    s.isempty();
    return 0;
}