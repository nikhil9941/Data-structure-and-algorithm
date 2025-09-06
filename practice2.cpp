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
int main(){
     Node *head=new Node(23);
     Node *dummy=head;
     head=insertAtEnd(head,34);
     head=insertAtEnd(head,43);
     head=insertAtEnd(head,89);
     while(dummy!=NULL){
        cout<<dummy->val<<" ";
        dummy=dummy->next;
     }
     return 0;
}
