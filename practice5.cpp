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
void ReverseList(Node* head){
    if(head->next!=NULL){
     ReverseList(head->next);
    }
    cout<<head->val<<" ";
}
int main(){
     Node *head=new Node(23);
     Node *dummy=head;
     Node *temp;
     head=insertAtEnd(head,34);
     head=insertAtEnd(head,43);
     head=insertAtEnd(head,89);
     
     ReverseList(dummy);
    
     return 0;
}
