#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 88. Merge Sorted Array
Difficulty: Easy
Date: 2026-06-13
TC: O(m+n)
SC: O(1)
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1;
        for (int k = nums1.size()-1; k >= 0; k--) {
            if (j < 0 || (i>=0 && nums1[i] > nums2[j])) {
                nums1[k] = nums1[i--];
            } else {
                nums1[k] = nums2[j--];
            }
        }

    }
};



int main() {
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    s.merge(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << ' ';
    }
    cout << endl;

    return 0;
}










/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> mergedValues ;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                mergedValues.push_back(nums1[i]);
                i++;
            } else {
                mergedValues.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            mergedValues.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            mergedValues.push_back(nums2[j]);
            j++;
        }

        nums1 = mergedValues;
    }
};
*/