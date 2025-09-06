#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(vector<vector<int>> &adj, int start, vector<bool> &visit) {
   stack<int> s;
   s.push(start);
   while(!s.empty()){
        int node=s.top();
        s.pop();
        cout<<node<<" ";
        for(int i:adj[node]){
            if(visit[i]!=true){
                s.push(i);
                visit[i]=true;
            }
        }
   }
}

int main() {
    int n = 7;  
    vector<vector<int>> adj(n + 1); 
    vector<bool> visit(n + 1, false); 

    
    adj[1] = {2, 3, 4};
    adj[2] = {1, 5, 6};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2, 7};
    adj[6] = {2};
    adj[7] = {5};

    cout << "DFS: ";
    DFS(adj, 1, visit);
    cout << endl;

    return 0;
}
