class Solution {
private:
    int kth_smallest_ele;
    int rank;
    int K;
    void inorderTraverse(TreeNode* currentNode) {
        if (currentNode == nullptr) {
            return;
        }
        
        inorderTraverse(currentNode -> left);
        rank++;
        if (rank == K) {
            kth_smallest_ele = currentNode -> val;
        }
        inorderTraverse(currentNode -> right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        kth_smallest_ele = -1;
        this->K = k;
        rank = 0;
        inorderTraverse(root);
        return kth_smallest_ele;
    }
};
