//TC: O(n)
//SC: O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) {
            return vector<vector<int>>();
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>result;

        while (!q.empty()) {
            vector<int>level;
            int sz = q.size();
            for (int i = 0; i < sz; i++) {
                TreeNode* node = q.front();
                level.push_back(node->val);
                q.pop();
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            result.push_back(level);
        }

        return result;
    }
};