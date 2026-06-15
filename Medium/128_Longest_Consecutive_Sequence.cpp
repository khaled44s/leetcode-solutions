#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 128. Longest Consecutive Sequence
Difficulty: Medium
Date: 2026-06-15
TC: O(n)
SC: O(n)
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxConsLength = nums.size() != 0;
        for(auto& val: numSet) {
            if (!numSet.count(val - 1)) {
                int currentLen = 0;
                for (int currentVal = val; numSet.count(currentVal) != 0; currentVal++) {
                    currentLen = currentLen + 1;
                }
                maxConsLength = max(maxConsLength, currentLen);
            }
        }

        return maxConsLength;
    }
};

int main() {
	Solution s;
	vector<int> nums = {2, 1, 3, 7, 8,4};
	cout << s.longestConsecutive(nums) << endl;

	return 0;
}
