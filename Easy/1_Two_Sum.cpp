#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 1. Two Sum
Difficulty: Easy
Date: 2026-06-01
TC: O(n)
SC: O(n)
*/
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> oldNums;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (oldNums.count(complement)) {
                return {oldNums[complement], i};
            }

            oldNums[nums[i]] = i;
        }

        return {};
	}
};


int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);
    for (int indices: result) cout << indices << " ";
    cout << endl;

    return 0;
}