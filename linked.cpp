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
void insertAtBegining(Node* &head,int x){
    Node *newNode= new Node(x);
    if(head!=NULL){
        newNode->next=head;
        head=newNode;
    }
    
    
}
int main(){
     Node *head=new Node(23);
     insertAtBegining(head,34);
     insertAtBegining(head,43);
     insertAtBegining(head,89);
     while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
     }
     return 0;
}