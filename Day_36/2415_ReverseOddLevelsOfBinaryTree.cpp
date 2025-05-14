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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int level = 0;
        if (!root)
        {
            return nullptr;
        }
        else if (!root->right && !root->left)
        {
            return root;
        }

        // store root in a temp variable to perform operations on
        TreeNode* temp = root;
        TreeNode* temp2 = nullptr;
        // int temp2;

        // using bfs
        queue<TreeNode*> q;

        // to keep track of curr level nodes
        vector<TreeNode*> currentLevelNodes;

        // to keep track of level size
        int levelSize = 0;

        q.push(root);

        while (!q.empty())
        {
            levelSize = q.size();

            // for pushing level nodes
            for (int i = 0; i < levelSize; i++)
            {
                temp = q.front();
                q.pop();
                currentLevelNodes.push_back(temp);

                if (temp->left)
                {
                    q.push(temp->left);
                }

                if (temp->right)
                {
                    q.push(temp->right);
                }

            }
            

            // switch if level is odd
            if (level % 2 == 1) 
            {
                int left = 0;
                int right = currentLevelNodes.size() - 1;
                while (left < right) 
                {
                    std::swap(currentLevelNodes[left]->val, currentLevelNodes[right]->val);
                    left++;
                    right--;
                }
            }
            
            currentLevelNodes.clear();    
            level++;
        }

        return root;
    }
};

