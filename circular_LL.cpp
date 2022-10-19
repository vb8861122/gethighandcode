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
bool circular(Node * & head){
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        cout<<"LL is circular"<<endl;
        return true;
    }
    else{
        cout<<"L-L is not circular";
        return false;
    }
}
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
int main(){
    Node* n1=new Node(5);
    Node *head=n1;
    insertathead(head,10);
    insertathead(head,15);
    print(head);
    insertathead(head,20);
    head->next->next=head;
   // print(head);
    circular(head);
    return 0;

}