class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (root == nullptr) {
            return nullptr;
        }

        int currentValue = root -> val;
        if (currentValue < low) {
            return trimBST(root -> right, low, high);
        } 
        if (currentValue > high) {
            return trimBST(root -> left, low, high);
        }

        root -> left = trimBST(root -> left, low, high);
        root -> right = trimBST(root -> right, low, high);
        return root;
    }
};
