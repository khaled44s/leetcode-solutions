#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> newArr;
        for (auto x: nums) {
            if (x%2 == 0) {
                newArr.push_back(x);
            }
        }
        for (auto x: nums) {
            if (x%2 == 1) {
                newArr.push_back(x);
            }
        }

        return newArr;
    }
};

int32_t main() {
    vector<int> nums = {3,1,2,4};
    Solution s;
    vector<int> ans = s.sortArrayByParity(nums);
    for (auto val: ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
