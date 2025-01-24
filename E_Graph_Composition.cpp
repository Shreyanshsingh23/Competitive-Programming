#include <bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n);
        for(int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }
    
    int find(int x) {
        if(parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    void unite(int x, int y) {
        int px = find(x), py = find(y);
        if(px == py) return;
        
        if(rank[px] < rank[py]) {
            parent[px] = py;
        } else if(rank[px] > rank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rank[px]++;
        }
    }
};

// void solve() {
//     int n, m1, m2;
//     cin >> n >> m1 >> m2;
    
//     DSU dsu_f(n), dsu_g(n);
    
//     for(int i = 0; i < m1; i++) {
//         int u, v;
//         cin >> u >> v;
//         u--; v--;  
//         dsu_f.unite(u, v);
//     }
    
//     for(int i = 0; i < m2; i++) {
//         int u, v;
//         cin >> u >> v;
//         dsu_g.unite(u, v);
//     }
    
//     int operations = 0;
//     vector<vector<int>> need_connect; 
//     vector<int> comp_f(n), comp_g(n);
    
//     for(int i = 0; i < n; i++) {
//         comp_f[i] = dsu_f.find(i);
//         comp_g[i] = dsu_g.find(i);
//     }
    
//     map<pair<int,int>, vector<int>> groups;
//     for(int i = 0; i < n; i++) {
//         groups[{comp_f[i], comp_g[i]}].push_back(i);
//     }
    
//     for(const auto& group : groups) {
//         if(need_connect.empty()) {
//             need_connect.push_back(group.second);
//         } else {
//             bool same_g = (dsu_g.find(group.second[0]) == 
//                          dsu_g.find(need_connect[0][0]));
//             bool same_f = (dsu_f.find(group.second[0]) == 
//                          dsu_f.find(need_connect[0][0]));
            
//             if(same_g != same_f) {
//                 operations++;
//             }
//             need_connect.push_back(group.second);
//         }
//     }
    
//     cout << operations << "\n";
// }

void solve() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    
    DSU dsu_f(n), dsu_g(n);
    vector<pair<int,int>> edges_f, edges_g;
    
    // Read edges and build DSUs
    for(int i = 0; i < m1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        dsu_f.unite(u, v);
        edges_f.push_back({u, v});
    }
    
    for(int i = 0; i < m2; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        dsu_g.unite(u, v);
        edges_g.push_back({u, v});
    }
    
    // Map vertices to components
    map<int, vector<int>> comp_f, comp_g;
    for(int i = 0; i < n; i++) {
        comp_f[dsu_f.find(i)].push_back(i);
        comp_g[dsu_g.find(i)].push_back(i);
    }
    
    // Count operations needed
    int operations = 0;
    
    // For each pair of vertices
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            bool f_connected = dsu_f.find(i) == dsu_f.find(j);
            bool g_connected = dsu_g.find(i) == dsu_g.find(j);
            
            if(f_connected && !g_connected) {
                // Need to break connection in F
                operations++;
            }
            if(!f_connected && g_connected) {
                // Need to add connection in F
                operations++;
            }
        }
    }
    
    cout << operations << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}