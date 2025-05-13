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
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
        {
            return nullptr;
        }

        queue<TreeNode*> q;
        TreeNode* temp;
        TreeNode* temp2;
        q.push(root);

        while (!q.empty())
        {
            temp = q.front();
            q.pop();
            if (temp->right)
            {
                q.push(temp->right);
            }

            if (temp->left)
            {
                q.push(temp->left);
            }

            // switch
            temp2 = temp->right;
            temp->right = temp->left;
            temp->left = temp2;
        }

        return root;
    }
};
