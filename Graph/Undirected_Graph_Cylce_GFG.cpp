// using bfs
// cycle detection

class Solution {
public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> graph(V);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][1];
            int v = edges[i][0];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    
        vector<int> vis(V, 0);
        
        for (int i = 0; i < V; i++) {
            if (vis[i]) continue;
            queue<pair<int,int>> q;
            q.push({i, -1});
            vis[i] = 1;
            
            while (!q.empty()) {
                auto [node, parent] = q.front();
                q.pop();
                
                for (auto child: graph[node]) {
                    if (vis[child] == 0) {
                        q.push({child, node});
                        vis[child]++;
                    } else if (vis[child]==1 && child != parent) return true;
                }
            }
        }
    
        return false;
        
    }
};

