//TC: O(max depth)
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

/*
class Solution {
private:
    TreeNode* searchValInBST(TreeNode* currentNode, int val) {
        if (currentNode == nullptr || currentNode -> val == val) {
            return currentNode;
        }

        TreeNode* leftSubTree = searchValInBST(currentNode -> left, val);
        if (leftSubTree != nullptr) return leftSubTree;
        return searchValInBST(currentNode -> right, val);
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchValInBST(root, val);
    }
};
*/


/*
class Solution {
private:
    TreeNode* searchValInBST(TreeNode* currentNode, int val) {
        if (currentNode == nullptr || currentNode -> val == val) {
            return currentNode;
        }

        TreeNode* leftSubTree = searchValInBST(currentNode -> left, val);
        TreeNode* rightSubTree = searchValInBST(currentNode -> right, val);
        return leftSubTree == nullptr? rightSubTree: leftSubTree;
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchValInBST(root, val);
    }
};
*/

/*
class Solution {
private:
    TreeNode* searchValInBST(TreeNode* currentNode, int val) {
        if (currentNode == nullptr) {
            return nullptr;
        }
        if (currentNode -> val == val) {
            return currentNode;
        }

        TreeNode* leftSubTree = searchValInBST(currentNode -> left, val);
        TreeNode* rightSubTree = searchValInBST(currentNode -> right, val);
        if (leftSubTree != nullptr) return leftSubTree;
        if (rightSubTree != nullptr) return rightSubTree;
        return nullptr;
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchValInBST(root, val);
    }
};
*/