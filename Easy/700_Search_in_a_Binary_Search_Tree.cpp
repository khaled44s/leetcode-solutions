// TC: O(max depth of tree)
class Solution {
private:
    TreeNode* searchValInBST(TreeNode* currentNode, int val) {
        if (currentNode == nullptr || currentNode -> val == val) {
            return currentNode;
        }

        int currentVal = currentNode -> val;
        if (val < currentVal) {
            return searchValInBST(currentNode -> left, val);
        }
        return searchValInBST(currentNode -> right, val);
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchValInBST(root, val);
    }
};
