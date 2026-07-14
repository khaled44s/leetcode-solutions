class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int total = 0, cnt = 0;
                
                for (int r = i-1; r < i+2; r++) {
                    for (int c = j-1; c < j+2; c++) {
                        if (r<0 || c<0 || r==n || c==m) continue;
                        total += img[r][c];
                        cnt++;
                    }
                }

                ans[i][j] = total / cnt;
            }
        }

        return ans;
    }
};
