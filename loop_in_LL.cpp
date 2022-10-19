#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertathead(Node* &head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;    
}
void print(Node * head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool loop(Node* &head){
    Node* slow=head;
    Node*fast=head->next;
    int i=0;
    while(slow!=fast && fast!=NULL){
        i++;
        cout<<"itr"<<i<<endl;
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
              
    }
    if (slow==fast){
        cout<<"loop exist"<<endl;
        return true;
    }
    else{
        cout<<"no loop"<<endl;
        return false;
    }
}
int main(){
    Node* n1=new Node(5);
    Node *head=n1;
    insertathead(head,10);
    insertathead(head,15);
    insertathead(head,20);
    print(head);
    head->next->next=head;
    loop(head);

    
   
    //print(head);
    //circular(head);
    return 0;

}