class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int cnt[101] = {};
        for (auto val: nums) {
            cnt[val]++;
        }
        int uniqueSum = 0;
        for (auto val: nums) {
            if (cnt[val] == 1) {
                uniqueSum += val;
            }
        }
        
        return uniqueSum;
    }
};
