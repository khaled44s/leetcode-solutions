
class Solution {
public:
    int solve(TreeNode* root, int &prev) {
        if (root == NULL) {
            return INT_MAX;
        }
        int left = solve(root->left, prev);
        int curr = abs(root->val - prev);
        prev = root->val;
        int right = solve(root->right, prev);
        return min({left, right,curr});
    }

    int getMinimumDifference(TreeNode* root) {
        int prev = INT_MAX;
        return solve(root, prev);
    }
};
