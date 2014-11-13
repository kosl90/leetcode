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
    bool isBalanced(TreeNode *root) {
        if (root == NULL) return true;
        return abs(maxDepth(root->left) - maxDepth(root->right)) < 2 and isBalanced(root->left) and isBalanced(root->right);
    }
    
private:
    int maxDepth(TreeNode *root) {
        return maxDepth(root, 0);
    }
    

    int maxDepth(TreeNode* root, int depth) {
        if (root == NULL) {
            return depth;
        }
        int leftDeepth = maxDepth(root->left, depth+1);
        int rightDeepth = maxDepth(root->right, depth+1);
        return leftDeepth > rightDeepth ? leftDeepth : rightDeepth;
    }
};
