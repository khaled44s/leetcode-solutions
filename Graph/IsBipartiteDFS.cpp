#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(int node, int color, vector<vector<int>>& graph, vector<int>& vis) {
        vis[node] = 1 - color;
        for (auto child: graph[node]) {
            if (vis[child] == -1) {
                if(!dfs(child, 1 - color, graph, vis)) return false;
            } else if(vis[child] == vis[node]) return false;
        }

        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, -1);

        for (int i = 0; i < n; i++) {
            if (vis[i] == -1) {
                if (dfs(i, 0, graph, vis) == false) return false;
            }
        }

        return true;
    }
};

int32_t main() {
    vector<vector<int>> graph = {{1,2,3},{0,2},{0,1,3},{0,2}};
    Solution s;
    cout << s.isBipartite(graph) << endl;

    return 0;
}
