class Solution {
private:
    bool checkValidity(TreeNode* currentNode, long long L, long long R) {
        if (currentNode == nullptr) {
            return true;
        }

        int currentValue = currentNode -> val;
        bool validity = ( L <= currentValue && R >= currentValue );
        bool isLeftSubTreeOk = checkValidity(currentNode -> left, L, currentValue - 1LL);
        bool isRightSubTreeOk = checkValidity(currentNode -> right, currentValue + 1LL, R);
        return validity && isLeftSubTreeOk && isRightSubTreeOk;
    }
public:
    bool isValidBST(TreeNode* root) {
        return checkValidity(root, LONG_LONG_MIN, LONG_LONG_MAX);
    }
};
