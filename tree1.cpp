#include<iostream>
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
void preoder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preoder(root->left);
    preoder(root->right);
    cout<<endl;

}
void inoder(Node *root){
    if(root==NULL){
        return;
    }
    inoder(root->left);
    cout<<root->val<<" ";
    inoder(root->right);
    cout<<endl;
}
int main(){
    Node *head= new Node(23);
    Node *dummy=head;
    head=insert(head,12);
    head=insert(head,11);
    head=insert(head,10);
    while(dummy!=NULL){
        cout<<dummy->val<<" ";
        dummy=dummy->left;
    }
    return 0;
}