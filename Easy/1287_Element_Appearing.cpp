class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int x = arr.size() / 4;
        int ans = 0;
        for (auto val: arr) {
            int occurence = count(arr.begin(), arr.end(), val);
            if (occurence > x) {
                ans = val;
            }
        }
        return ans;
    }
};
