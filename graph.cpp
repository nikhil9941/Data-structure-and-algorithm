#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>> &adj, int start, vector<bool> &visit) {
    queue<int> q;
    visit[start] = true;
    q.push(start);

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (int neighbour : adj[x]) {
            if (!visit[neighbour]) {
                visit[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

int main() {
    int n = 7; 
    vector<vector<int>> adj(n + 1); 
    vector<bool> visit(n + 1, false); 

    
    adj[1] = {2,3,4};
    adj[2] = {1,5,6};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2,7};
    adj[6] = {2};
    adj[7] = {5};

   
    BFS(adj, 1, visit);

    return 0;
}
