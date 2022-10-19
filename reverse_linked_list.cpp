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
Node* reverserecursion(Node* &head,Node* &curr,Node* &prev){
    //if(head==NULL || head->next==NULL){
   //     return head;
   // }
    
    if(curr==NULL){
        return prev;
    }
        Node *forward=curr->next;
        curr->next=prev;
        return  reverserecursion(prev,forward,curr);
}
Node* reversegroupk(Node* &head,int k){
    Node* curr=head;
    Node* prev=NULL;
    Node* forward=NULL;
    int cnt=0;
    if (!head)
        return NULL;

    while(curr != NULL){
        cnt=0;
        Node* prev1=prev;
       while(cnt<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            cnt++;
        }
        
    }
    if (forward!=NULL)
        head->next=reversegroupk(forward,k);
    return prev;
}
Node* reverse1(Node* head, int k)
{
    // base case
    if (!head)
        return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
  
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
  
    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
        head->next = reverse1(next, k);
  
    /* prev is new head of the input list */
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
    cout<<endl;
    head=reverse(head);
    print(head);
    Node* curr=head;
    Node* prev=NULL;
    cout<<endl;
    head=reverserecursion(head,curr,prev);
    print(head);
    cout<<endl;

    head=reverse1(head,2);
     //cout<<endl;
    print(head);
    cout<<endl;
    head=reversegroupk(head,2);
       print(head);

}