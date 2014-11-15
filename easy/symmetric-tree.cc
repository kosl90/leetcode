/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root == NULL) return true;
        
        return isSymmetric(root->left, root->right);
    }
    
private:
    bool isSymmetric(TreeNode* left, TreeNode* right) {
        if (left == right) return true;
        if (left == NULL and right != NULL or left != NULL and right == NULL) return false;
        
        return left->val == right-> val and isSymmetric(left->left, right->right) and isSymmetric(left->right, right->left);
    }
};
