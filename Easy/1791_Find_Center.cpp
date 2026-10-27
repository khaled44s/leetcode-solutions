class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        bool a = edges[0][0] == edges[1][0];
        bool b = edges[0][0] == edges[1][1];
        if (a || b) {
            return edges[0][0];
        }
        return edges[0][1];
    }
};
