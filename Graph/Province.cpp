#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	

	int province(vector<vector<int>>&isConnected, n) {
		int n = isConnected.size();
		int ans = 0;
		vector<int> vis(n+1, 0);

		for (int i = 0; i < n; i++) {
			if (vis[i] == 0) {
				bfs(i, isConnected, vis);
				ans++;
			}
		}

		return ans;
	}
};

int32_t main() {
	vector<vector<int>> matrix = { {1,1,0}, {1,1,0}, {0,0,1} };
	int n = matrix.size();
	vector<vector<int>> graph(n);
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			if (matrix[i][j] == 1) {
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}

	

	return 0;
}