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
        if (this->next!=NULL){
            delete next;
            this->next=NULL;
        } 
        cout<<"memory is free for data "<<value<<endl;
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
void deletenode(Node* &head, Node* &tail,int pos){
    if (pos==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    Node* curr=head;
    Node* prev=head;
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}


int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;
    //cout<<node1->data<<" ";
    insertathead(head,7);
    insertathead(head,2);
    insertathead(head,10);
    //cout<<head->data<<endl;
    print(head);
    cout<<endl<<"HEAD"<<head->data<<endl;
    cout<<"TAIL"<<tail->data<<endl;
    deletenode(head,tail,1);
    print(head);
}
