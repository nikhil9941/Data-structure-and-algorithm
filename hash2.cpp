#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> ht;
    ht.insert(12);
    ht.insert(11);
    ht.insert(99);
    if(ht.find(99)!=ht.end()){
        cout<<"Present"<<endl;
    }
    else
      cout<<"absent"<<endl;
    for(int x :ht){
        cout<<x<<" ";
    }
    return 0;
}