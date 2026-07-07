#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> trans(col, vector<int>(row));
        for (int i = 0 ; i < col; i++){
            for (int j = 0; j<row; j++){
                trans[i][j] =  matrix[j][i];
            }
        }
        return trans;
    }
};

int32_t main() {
	vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
	Solution s;
	vector<vector<int>> m = s.transpose(matrix);
	for (auto row : m) {
		for (auto val: row) {
			cout << val << " ";
		}
		cout << endl;
	}


	return 0;
}
