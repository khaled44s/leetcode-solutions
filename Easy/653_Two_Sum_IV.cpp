class Solution {
private:
    bool isSumEqual;
    int K;
    unordered_set<int> nodeValues;

    void inorderTraverse(TreeNode* currentNode) {
        if (currentNode == nullptr) {
            return;
        }
        inorderTraverse(currentNode -> left);
        if (nodeValues.count(K - currentNode -> val)) {
            isSumEqual = true;
        }
        nodeValues.insert(currentNode -> val);
        inorderTraverse(currentNode -> right);
    }

public:
    bool findTarget(TreeNode* root, int k) {
        this -> K = k;
        isSumEqual = false;
        inorderTraverse(root);
        return isSumEqual;
    }
};
