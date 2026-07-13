class Solution {
  public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, stack<int>& st) {
        vis[node] = 1;
        for (auto child: adj[node]) {
            if (!vis[child]) {
                dfs(child, adj, vis, st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        stack<int>st;
        vector<int>vis(V, 0);
        vector<vector<int>> adj(V+1);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis, st);
            }
        }
        
        vector<int>ans;
        while(!st.empty()) {
            auto tp = st.top();
            st.pop();
            ans.push_back(tp);
        }
        
        return ans;
    }
};
