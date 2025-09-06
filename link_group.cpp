#include<iostream>
using namespace std;
struct Node{
  int data;
  Node* next=NULL;
  Node(int x): data(x),next(NULL){};
};
Node* Insert(Node *root,int x){
    Node* newNode=new Node(x);
    if(root==NULL)
     return newNode;
    else{
        root->next=newNode;
    }
    return newNode;

}
Node* Recursion(Node* head, int k, int end)
{
    if(k==end||head==NULL)
        return head;
    Node* temp =Recursion(head->next,k+1,end);
    cout<<head->data<<" ";
    return temp;
}
int main(){
    Node *head=NULL;
    Node *temp=NULL;
    int n,x,k,end;
    cout<<"Enter the Number of nodes:";
    cin>>n;
    for(int i=1;i<=n;i++){
       head=Insert(head,i);
       if(temp==NULL){
        temp=head;
       }
    }
    cout<<"Enter the size of group:";
    cin>>end;
    Node* temp2= temp;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n\n\nAnswer : ";
    while(temp2!=NULL)
    {
        temp2=Recursion(temp2,0,end);
        cout<<"  ";
        end++;
    }
    return 0;
}