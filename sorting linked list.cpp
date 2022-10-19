#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    Node* temp=head;
    int itr=0;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        //cout<<"iteration"<<itr<<endl;
        //itr++;
        
    }
}
Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* curr=head;
    Node* prev=NULL;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;
    //cout<<node1->data<<" ";
    insertathead(head,7);
    insertathead(head,2);
    insertathead(head,10);
    insertathead(head,15);
    insertathead(head,20);
    //cout<<head->data<<endl;
    print(head);
    //cout<<endl<<"HEAD"<<head->data<<endl;
    //cout<<"TAIL"<<tail->data<<endl;
    //deletenode(head,tail,1);
    //print(head);
}