#include <bits/stdc++.h>
using namespace std;
/*
Problem: Leetcode 48. Rotate Image
Difficulty: Medium
Date: 2026-06-11
TC: O(n^2)
SC: O(1)
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());

        for (int i = 0; i < matrix.size(); i++) {
        	for (int j = i + 1; j < matrix[i].size(); j++) {
        		swap(matrix[i][j], matrix[j][i]);
        	}
        }
    }
};

int main() {
	vector<vector<int>> matrix = {
		{1,2,3},{4,5,6},{7,8,9}
	};


	Solution s;
	s.rotate(matrix);

	for (auto& row: matrix) {
		for (auto& val: row) {
			cout << val << ' ';
		}
		cout << endl;
	}
	cout << endl;
	

	return 0;
}
