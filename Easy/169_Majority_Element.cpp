#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());
        int tempCount = 1, ans = nums[0];
        for (int i = 0; i < nums.size() - 1; i++) {
        	if (nums[i] == nums[i+1]) {
        		tempCount++;
        		ans = nums[i];
        		if (tempCount > nums.size()/2) return ans;
        	} else {
        		tempCount = 1;
        	}
        }

        return ans;
    }
};

int32_t main() {
	Solution s;
	vector<int> nums = {6,6,6,7,7,7,7,8};
	int cnt = s.majorityElement(nums);
	cout << cnt << endl;

	return 0;
}
