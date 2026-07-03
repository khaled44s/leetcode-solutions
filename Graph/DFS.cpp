#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool dfs(int parent, int destination, vector<vector<int>>&graph, vector<int>&vis) {
		if (parent == destination) return true;
		vis[parent] = 1;
		for (int child: graph[parent]) {
			if (vis[child] == 0) {
				if (dfs(child, destination, graph, vis)==true) {
					return true;
				}
			}
		}
		return false;
	}

	bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
		vector<vector<int>> graph(n);
		for (int i = 0; i < edges.size(); i++) {
			int u = edges[i][0];
			int v = edges[i][1];
			graph[u].push_back(v);
			graph[v].push_back(u);
		}

		vector<int> vis(n, 0);
		return dfs(source, destination, graph, vis);
	}
};


int32_t main() {
	int n = 3;
	vector<vector<int>> edges = {
		{0,1}, {1,2}, {2,0}
	};
	int source = 0;
	int destination = 2;
	
	Solution s;
	if (s.validPath(n, edges, source, destination)) {
		cout << "Path Exists." << endl;
	} else {
		cout << "Path Doesn't Exists." << endl;
	}

	return 0;
}

