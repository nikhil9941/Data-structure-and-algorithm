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
void cycleDetection(Node *head){
    Node *slow,*fast;
    slow=fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"Cycle is detected!"<<endl;
            break;
        }
    }
}
int main(){
    Node *head=new Node(14);
    head->next=new Node(24);
    head->next->next=new Node(89);
    head->next->next->next=new Node(100);
    head->next->next->next->next=head->next->next;
    cycleDetection(head);
    return 0;
}