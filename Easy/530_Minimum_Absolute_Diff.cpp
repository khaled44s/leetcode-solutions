class Solution {
private:
    TreeNode* prevNode;
    int minDiff;
    void inorder_traversal(TreeNode* currentNode) {
        if (currentNode == nullptr) {
            return;
        }

        inorder_traversal(currentNode -> left);
        if (prevNode != nullptr) {
            minDiff = min(minDiff, currentNode -> val - prevNode -> val);
        }
        prevNode = currentNode;
        inorder_traversal(currentNode -> right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        minDiff = INT_MAX;
        inorder_traversal(root);
        
        return minDiff;
    }
};

