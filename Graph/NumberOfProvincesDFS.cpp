#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int node, vector<vector<int>> &isConnected, vector<int> &vis) {
        vis[node] = 1;
        int n = isConnected.size();
        int parent = node;
        vis[parent] = 1;
        for (int child = 0; child < n; child++) {
            if (isConnected[parent][child] == 1 && vis[child] == 0) {
                dfs(child, isConnected, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n+1, 0);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                dfs(i, isConnected, vis);
                ans++;
            }
        }

        return ans;
    }
};

int32_t main() {
    vector<vector<int>> isConnected = { {1,1,0}, {1,1,0}, {0,0,1} };
    Solution s;
    int ans = s.findCircleNum(isConnected);
    cout << ans << endl;

    return 0;
}
