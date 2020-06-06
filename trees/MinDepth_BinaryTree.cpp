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
    int min = 9999999;
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        dfs(root, 0);
        return min;
    }
    void dfs(TreeNode* t, int height) {
        if (!t) return;
        if (!t->left && !t->right && height+1 < min) min = height + 1;
        dfs(t->left, height + 1);
        dfs(t->right, height +1 );
    }
};