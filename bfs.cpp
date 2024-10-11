#include<bits/stdc++.h>
using namespace std;

void addEdge(int u, int v,vector<vector<int>>& g){
    g[u][v] = 1;
    g[v][u] = 1;
    
    
}


void bfs(vector<vector<int>>& g, int s){
    queue<int> q;
    int v = g.size();
    vector<bool> visited(v,false);

    visited[s] = true;
    q.push(s);
    cout << "BFS starting from: " << q.front() << endl;

    while(!q.empty()){
        int curr = q.front();
        cout << curr << " ";
        q.pop();

        for(int i = 0; i< v; i++){
            if(g[curr][i]==1 and !visited[i]){
                q.push(i);
                visited[i]= true;
            }
        }
    }
}
int main(){
    int v= 5;
    
    vector<vector<int>> g(v,vector<int> (v,0));

    addEdge(0,1,g);
    addEdge(3,2,g);
    addEdge(0,4,g);
    addEdge(1,2,g);
    addEdge(3,4,g);

    // for(int i = 0; i< v; i++){
    //     for(int j = 0; j< v;j++){
    //         cout << g[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    bfs(g,0);
}