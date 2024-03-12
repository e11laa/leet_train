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

    void dfs(TreeNode *node, vector<int> &res){
        if(node->left)
            dfs(node->left, res);
        res.push_back(node->val);
        if(node->right)
            dfs(node->right, res);
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root)
            dfs(root, res);
        return res;
    }
};
