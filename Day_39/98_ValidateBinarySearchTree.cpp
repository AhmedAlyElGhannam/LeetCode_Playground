/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (!root)
        {
            return true;
        }

        // lambda expression for dfs
        function<bool(TreeNode*, long, long)> dfs = [&](TreeNode* temp, long min, long max)
        {
            if (!temp)
            {
                return true; 
            }

            if ((temp->val <= min) || (temp->val >= max)) 
            {
                return false;
            }

            return dfs(temp->left, min, temp->val) && dfs(temp->right, temp->val, max);
        };

        return dfs(root, LONG_MIN, LONG_MAX);
    }
};
