#include<iostream>
#include<stack>
using namespace std;
class stack{
    public:
    int top;
    int size;
    int *arr;
    stack(int s){
        this->size=s;
        arr=new int[size];
        top=-1;
    }
};
/*void push(int d){
    top++;
    arr[top]=d;

}
//void pop()
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
    cout<<arr[top];
}*/
 
int main(){
    stack s(2);
    //s.push(22);
    //cout<<s.peak();
    return 0;
}