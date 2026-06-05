#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 496. Next Greater Element I
Difficulty: Easy
Date: 2026-06-05
TC: O(n)
SC: O(n)
*/
class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> nextGreaterValRightMap;
		stack<int> nextGreaterElementStack;
		for (int i = nums2.size(); i >= 0; i--) {
			while (!nextGreaterElementStack.empty() && nextGreaterElementStack.top() < nums2[i]) {
				nextGreaterElementStack.pop();
			}
			if (nextGreaterElementStack.empty()) {
				nextGreaterValRightMap[ nums2[i] ] = -1;
			}
			else {
				nextGreaterValRightMap[ nums2[i] ] = nextGreaterElementStack.top();
			}
			nextGreaterElementStack.push(nums2[i]);
		}

		vector<int> nextGreaterValues;
		for (auto& num: nums1) {
			nextGreaterValues.push_back(nextGreaterValRightMap[ num ]);
		}

		return nextGreaterValues;
	}
};


//TC: O(n^2)
//SC: O(n)
// class Solution {
// public:
// 	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
// 		unordered_map<int, int> nextGreaterValRightMap;
// 		for (int i = 0; i < nums2.size(); i++) {
// 			int firstGreaterValueOnRight = -1;
// 			for (int j = i+1; j < nums2.size(); j++) {
// 				if (nums2[i] < nums2[j]) {
// 					firstGreaterValueOnRight = nums2[j];
// 					break;
// 				}
// 			}
// 			nextGreaterValRightMap[nums2[i]] = firstGreaterValueOnRight;
// 		}

// 		vector<int> greaterValues;
// 		for (auto& num: nums1) {
// 			greaterValues.push_back(nextGreaterValRightMap[num]);
// 		}

// 		return greaterValues;
// 	}
// };

int main() {
	Solution s;
	vector<int> nums1 = {4, 1, 2};
	vector<int> nums2 = {1, 3, 4, 2};
	vector<int> ans = s.nextGreaterElement(nums1, nums2);
	for (auto& val: ans) {
		cout << val << " ";
	}
	cout << endl;

	return 0;
}
