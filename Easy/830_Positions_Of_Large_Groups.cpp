class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int last = 0;
        s.push_back('#');
        vector<vector<int>>ans;
        int total = 1;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            if (s[i]==s[i-1]) total++;
            else {
                if (total>=3) {
                    ans.push_back({last, i-1});
                }
                total = 1;
                last = i;
            }
        }
        return ans;
    }
};
