#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(int x){
        val=x;
        next=NULL;
    }
};
Node* insertAtEnd(Node* head,int x){
    Node *newNode= new Node(x);
    if(head!=NULL){
       head->next=newNode;
    }
        return newNode;   
}
Node* ReverseList(Node* head){
     Node* tnext;
     Node* tprev=NULL;
     while(head!=NULL){
        tnext=head->next;
        head->next=tprev;
        tprev=head;
        head=tnext;
     }
     return tprev;
}
int main(){
     Node *head=new Node(23);
     Node *dummy=head;
     Node *temp;
     head=insertAtEnd(head,34);
     head=insertAtEnd(head,43);
     head=insertAtEnd(head,89);
     temp=ReverseList(dummy);
     while(dummy!=NULL){
        cout<<dummy->val<<" ";
        dummy=dummy->next;
     }
     cout<<endl;
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
     return 0;
}
