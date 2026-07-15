class Solution {
  public:
  // Kahn's Algorithm
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adjList(V+1);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adjList[u].push_back(v);
        }
        
        vector<int> indegree(V+1, 0);
        for (int i = 0; i < V; i++) {
            for (auto child: adjList[i]) indegree[child]++;
        }
        
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) q.push(i);
        }
        
        vector<int> topoSortList;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topoSortList.push_back(node);
            
            for (auto child: adjList[node]) {
                indegree[child]--;
                if (indegree[child] == 0) q.push(child);
            }
        }
        
        return topoSortList;
    }
};


