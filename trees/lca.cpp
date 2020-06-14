/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode *LCA;
    bool helper(TreeNode* node, TreeNode* p, TreeNode* q) {
        bool left = false, right = false, mid = false;
        if(node == nullptr)
            return false;
        
        left = helper(node->left, p, q);
        right = helper(node->right, p, q);
        
        if(node == p || node == q) {
            mid = true;
        }
        
        if((right && left) || (right && mid) || (left && mid)) {
            LCA = node;
        }
        return left | right | mid;            
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        helper(root, p, q);
        return LCA;
    }
};