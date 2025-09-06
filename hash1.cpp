#include<iostream>
using namespace std;
void insert(int key ,int ht[]){
    int oi=(key%10);
    int index=oi;
    int i=0;
    while(ht[index]!=-1){
      index=(oi+(++i))%10;
      if(index==oi)
      break;
    }
    if(ht[index]==-1){
      ht[index]=key;
    }
    for(int j=0;j<10;j++){
      cout<<ht[j]<<" ";
    }
}
bool search(int key){
    int oi=(key%10),i=0;
    index=oi;
    while(ht[index]!=-1){
        index=(index+(++i))%10;
         if(index==oi)
         break;
    }
    if(ht[index]==key){
        return true;
    }
    return false;
}
bool Delete(int key int){
    int oi=(key%10),i=0;
    index=oi;
    while(ht[index]!=-1){
        index=(index+(++i)%10);
        if(index==oi)
         break;
    }
    if(ht[index]==key){
        ht[index]==-1;
        return true;
    }
    return false;
}
int main(){
    int key;
    int ht[10];
    for(int i=0;i<10;i++){
        ht[i]=-1;
    }
    cout<<"Enter Key value:";
    cin>>key;
    insert(key,ht);
    bool ser=search()
    return 0;
}