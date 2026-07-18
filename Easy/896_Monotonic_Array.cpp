class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc1 = 0, dnc1 = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i+1] >= nums[i]) inc1++;
            if (nums[i+1] <= nums[i]) dnc1++;
        }
        
        if (inc1 == nums.size() - 1 || dnc1 == nums.size() - 1) return true;
        return false;
    }
};
