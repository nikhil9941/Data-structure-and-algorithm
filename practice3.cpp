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
void insertAtPos(Node* head,int pos,int x){
    Node* newNode=new Node(x);
    Node* temp;
    if(pos==1&&head!=NULL){
       newNode->next=head;
    }
    else{
        for(int i=2;i<pos;i++){
            head=head->next;
        }
        newNode->next=head->next;
        head->next=newNode;
    }
   
}
void deleteByPos(Node* head,int pos){
    for(int i=2;i<pos;i++){
        head=head->next;
    }
    head->next=head->next->next;
}
int main(){
     Node *head=new Node(23);
     Node *dummy=head;
     Node *dummy2=dummy;
     head=insertAtEnd(head,34);
     head=insertAtEnd(head,43);
     head=insertAtEnd(head,89);
     insertAtPos(dummy,3,100);
     while(dummy!=NULL){
        cout<<dummy->val<<" ";
        dummy=dummy->next;
     }
     cout<<endl;
     deleteByPos(dummy2,3);
     while(dummy2!=NULL){
        cout<<dummy2->val<<" ";
        dummy2=dummy2->next;
     }
     return 0;
}