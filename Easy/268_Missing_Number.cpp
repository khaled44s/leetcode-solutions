/*
TC: O(n)
SC: O(1)
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing_number = 0;
        for (int i = 0; i <= nums.size(); i++) {
            missing_number ^= i;
        }
        for (int x: nums) {
            missing_number ^= x;
        }

        return missing_number;
    }
};

