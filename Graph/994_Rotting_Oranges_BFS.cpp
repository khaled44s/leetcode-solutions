class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) q.push({i, j});
                else if (grid[i][j] == 1) fresh++;
            }
        }

        if (fresh == 0) return 0;
        vector<pair<int,int>> dir = { {1,0}, {0,1}, {-1,0}, {0,-1} };
        int ans = 0;

        while (!q.empty()) {
            int sz = q.size();
            int cnt = 0;

            while (sz--) {
                auto [x, y] = q.front();
                q.pop();

                for (auto [dx, dy]: dir) {
                    int xx = x + dx;
                    int yy = y + dy;
                    if (xx>=0 && yy>=0 && xx<m && yy<n && grid[xx][yy] == 1) {
                        grid[xx][yy] = 2;
                        q.push({xx, yy});
                        cnt++;
                        fresh--;
                    }
                }
            }

            if (cnt) ans++;
        }  

        if (fresh == 0) return ans;
        return -1;      

    }
};


