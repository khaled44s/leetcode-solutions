#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 217. Contains Duplicate
Difficulty: Easy
Date: 2026-06-01
TC: O(n)
SC: O(n)
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seenValues;
        for (auto num: nums) {
            if (seenValues.count(num)) {
                return true;
            }
            seenValues.insert(num);
        }

        return false;
    }
};

int main() {
    Solution s;

    vector<int>nums = {1, 2, 3, 1};
    cout << s.containsDuplicate(nums) << endl;

    return 0;
}