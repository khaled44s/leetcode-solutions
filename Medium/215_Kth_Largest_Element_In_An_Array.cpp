#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int quickSelect(vector<int>& nums, int k) {
        int n = nums.size();
        int pivot = nums[rand()%n];
        vector<int>greaterValues, smallerValues, pivotValues;
        for (auto& val: nums) {
            if (val > pivot) {
                greaterValues.push_back(val);
            } else if (val < pivot) {
                smallerValues.push_back(val);
            } else {
                pivotValues.push_back(val);
            }
        }

        if (k <= greaterValues.size()) {
            return quickSelect(greaterValues, k);
        }
        if (k > greaterValues.size() + pivotValues.size()) {
            return quickSelect(smallerValues, k - greaterValues.size() - pivotValues.size());
        }
        return pivot;
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, k);
    }
};


int main() {
    Solution s;
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;

    cout << s.findKthLargest(nums, k) << endl;

    return 0;
}
