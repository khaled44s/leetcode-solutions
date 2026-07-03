#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
		vector<vector<int>> graph(n);
		for (int i = 0; i < edges.size(); i++) {
			int u = edges[i][0];
			int v = edges[i][1];
			graph[u].push_back(v);
			graph[v].push_back(u);
		}

		vector<int> vis(n, 0);
		queue<int> q;
		q.push(source);
		vis[source] = 1;

		while ( !q.empty() ) {
			int parent = q.front();
			q.pop();
			for (auto child: graph[parent]) {
				if (vis[child] == 0) {
					q.push(child);
					vis[child] = 1;
				}
			}
		}

		if (vis[destination] == 1) return true;
		else return false;
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
		cout << "True. Path Exists." << endl;
	} else {
		cout << "False. Path Doesn't Exists." << endl;
	}

	return 0;
}

