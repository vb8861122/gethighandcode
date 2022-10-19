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
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

    }
};
Node* removeduplicates(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==curr->next->data){
            Node* temp=curr->next->next;
            Node* todelete=curr->next;
            delete(todelete);
            curr->next=temp;

        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
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
Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    
    return head; 
}
int main(){
    Node* node1=new Node(20);
    Node* head=node1;
    Node* tail=node1;
    //cout<<node1->data<<" ";
    insertathead(head,15);
    insertathead(head,14);
    insertathead(head,12);
    insertathead(head,12);
    insertathead(head,10);
    print(head);
    //insertathead(head,10);
    //head=removeduplicates(head);
    //uniqueSortedList(Node * head)
    print(uniqueSortedList(head));
    return 0;
}