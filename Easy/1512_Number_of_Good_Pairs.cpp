#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 1512. Number of Good Pairs
Difficulty: Easy
Date: 2026-06-05
TC: O(n)
SC: O(n)
*/
class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		unordered_map<int, int> freqMap;
		int goodPairs = 0;
		for (auto& num : nums) {
			goodPairs += freqMap[num];
			freqMap[num]++;
		}

		return goodPairs;
	}
};



// Slightly Optimized approach
// TC: O(nlogn)
// SC: O(1)
// class Solution {
// public:
// 	int numIdenticalPairs(vector<int>& nums) {
// 		sort(nums.begin(), nums.end());
// 		int goodPairs = 0;
// 		int currentDuplicateCount = 0;
// 		for (int i = 0; i < nums.size() - 1; i++) {
// 			if (nums[i] == nums[i+1]) {
// 				currentDuplicateCount++;
// 				goodPairs += currentDuplicateCount;
// 			}
// 			else {
// 				currentDuplicateCount = 0;
// 			}
// 		}

// 		return goodPairs;
// 	}
// };




//Brute force solution
//TC: O(n^2)
//SC: O(1)
// class Solution {
// public:
// 	int numIdenticalPairs(vector<int>& nums) {
// 		int cnt = 0;
// 		for (int i = 0; i < nums.size()-1; i++) {
// 			for (int j = i + 1; j < nums.size(); j++) {
// 				if (nums[i] == nums[j]) {
// 					cnt++;
// 				}
// 			}
// 		}

// 		return cnt;
// 	}
// };


int main() {
	Solution s;
	vector<int> nums = {1,2,3,1,1,3};
	cout << s.numIdenticalPairs(nums) << endl;

	return 0;
}