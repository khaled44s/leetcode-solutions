#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>>& adj, int start, int n)
{
    vector<int> visited(n + 1, 0);
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < adj[node].size(); i++)
        {
            int neighbor = adj[node][i];

            if (!visited[neighbor])
            {
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    int start;
    cin >> start;

    cout << "BFS Traversal: ";
    BFS(adj, start, n);

    return 0;
}
