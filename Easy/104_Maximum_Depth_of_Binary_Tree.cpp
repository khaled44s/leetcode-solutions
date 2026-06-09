/*
TC: O(n)
SC: O(h)
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftPath = maxDepth(root -> left);
        int rightPath = maxDepth(root -> right);
        return max(leftPath, rightPath) + 1;
    }
};

