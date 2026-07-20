#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool dfs(int node, int parent, vector<vector<int>>&adj, vector<int>&vis) {
		vis[node] = 1;
		for (auto child: adj[node]) {
			if (!vis[child]) {
				if (!dfs(child, node, adj, vis)) return false;
			} else if (child != parent) return false;
		}

		return true;
	}
	bool validTree(int n, vector<vector<int>>&edges) {
		if (edges.size() != n-1) return false;
		vector<vector<int>>adj(n);
		for(auto &edge: edges) {
			int u = edge[0], v = edge[v];
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		vector<int> vis(n, 0);

		if (!dfs(0, -1, adj, vis)) return false;

		for (int i = 0; i < n; i++) {
			if (!vis[i]) return false;
		}

		return true;
	}
};

int32_t main() {
	int n = 5;
	vector<vector<int>> edges = { {0,1},{1,2},{2,3},{1,3},{1,4} };

	Solution s;
	cout << s.validTree(n, edges) << endl;

	return 0;
}
