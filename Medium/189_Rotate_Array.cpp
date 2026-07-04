#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        for (int i = 0; i < n - k; i++) {
            nums.push_back(nums[i]);
        }
        nums.erase(nums.begin(), nums.begin() + n - k);
    }
};

int32_t main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    s.rotate(nums, k);
    for (auto val: nums) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
