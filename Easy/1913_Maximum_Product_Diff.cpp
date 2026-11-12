class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int lowLow = nums[0];
        int lowHigh = nums[1];
        int highLow = nums[n - 2];
        int highHigh = nums[n - 1];

        return (highLow * highHigh) - (lowLow * lowHigh);
    }
};
