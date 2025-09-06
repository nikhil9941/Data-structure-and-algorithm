#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
Node* insert(Node *root,int x){
    Node *temp=root;
    Node *parent=NULL;
    if(root==NULL){
        root=new Node(x);
        return root;
    }
    while(temp!=NULL){
         parent=temp;
        if(x<temp->val)
         temp=temp->left;
        else
         temp=temp->right;
    }
    if(x<parent->val){
        parent->left=new Node(x);
    }
    else{
        parent->right=new Node(x);
    }
    return parent;
}
void BFS(Node *root){
    if(root==NULL)
     return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)
         q.push(temp->left);
        if(temp->right)
         q.push(temp->right);
    }
}
int main(){
    Node *head= new Node(23);
    Node *dummy=head;
    head=insert(head,12);
    head=insert(head,56);
    head=insert(head,10);
    head=insert(head,99);
    head=insert(head,25);
    head=insert(head,34);
    BFS(dummy);
    return 0;
}