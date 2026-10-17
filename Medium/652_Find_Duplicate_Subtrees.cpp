class Solution {
private:
    vector<TreeNode*> duplicateSubTrees;
    map<string, int> mp;
    string findDuplicate(TreeNode* currentNode) {
        if (currentNode == NULL) {
            return "";
        }
        string leftSubTree = findDuplicate(currentNode -> left);
        string rightSubTree = findDuplicate(currentNode -> right);
        string currentSubTree = to_string(currentNode->val) + "#" + leftSubTree + "#" + rightSubTree;

        mp[currentSubTree]++;
        if (mp[currentSubTree] == 2) {
            duplicateSubTrees.push_back(currentNode);
        }
        return currentSubTree;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        findDuplicate(root);
        return duplicateSubTrees;
    }
};
