#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next, *prev;
    Node(int x){
        val=x;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(Node *&root,int x){
  if(root==NULL){
   Node *newNode=new Node(x);
   root=newNode;
   return;
  }
}
int main(){
 Node *head=NULL;
 insertAtHead(head,23);

}