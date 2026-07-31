class Solution {
private:
    int rangeValueSum(TreeNode* currentNode, int low, int high) {
        if (currentNode == nullptr) {
            return 0;
        }

        int rangeSum = 0;
        int currentValue = currentNode -> val;
        if (low <= currentValue && high >= currentValue) {
            rangeSum += currentValue;
        }

        if (low < currentValue) {
            rangeSum += rangeValueSum(currentNode -> left, low, high);
        }
        rangeSum += rangeValueSum(currentNode -> right, low, high);
        
        return rangeSum;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeValueSum(root, low, high);
    }
};
