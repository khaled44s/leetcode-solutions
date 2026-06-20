//TC: O(n)
//SC: O(h)
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }

        if (p == NULL || q == NULL || p->val != q->val) {
            return false;
        }

        bool isSameLeft = isSameTree(p->left, q->left);
        bool isSameRight = isSameTree(p->right, q->right);

        return isSameLeft && isSameRight;
    }
};
