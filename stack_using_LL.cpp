#include<iostream>
//#include<list>
using namespace std;
class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

class Stack{
    public:
    int size;
    Node* head;
    Stack(){
        size=0;
        head=NULL;
        }
    void push(int d){
        Node *temp=new Node(d);
    size++;
        if(head==NULL){
            head=temp;
        }
        else{
    
    temp->next=head;
    head=temp;
    cout<<head->data<<endl;
        }
}
void pop() {
    if(size==0){
        cout<<"stack is empty";
        return;
    }
    else{
        size--;
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
}
int peek(){
    if(head==NULL){
        return -1;
    }
    else
    return head->data;
}
void display(){
    if(head==NULL){
        cout<<"stack is empty";
    }
    else{
        while(temp!=NULL){
        Node* temp=head;
        cout<<temp->data<<endl;
        temp=temp->next;
        }
    }
}
          
    
}  ; 

int main(){
    Stack s1;
    s1.push(2);
    s1.push(5);
    s1.pop();
    int ans=s1.peek();
    cout<<ans;
    
    return 0;
}
