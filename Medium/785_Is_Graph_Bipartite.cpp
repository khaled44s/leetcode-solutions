#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, -1);

        for (int i = 0; i < n; i++) {
            if (vis[i] != -1) continue;

            queue<int> q;
            q.push(i);
            vis[i] = 0;

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int child: graph[node]) {
                    if (vis[child] == -1) {
                        vis[child] = 1 - vis[node];
                        q.push(child);
                    } else if(vis[child] == vis[node]) return false;
                }
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
