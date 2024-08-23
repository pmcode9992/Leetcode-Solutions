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
    int f(TreeNode* node, bool &flag){
        if(node == NULL){
            return 0;
        }
        int left = f(node->left, flag);
        int right = f(node->right, flag);
        if(abs(left - right) > 1){
            flag = false;
        }
        return 1 + max(left, right);

    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        bool flag = true;
        f(root, flag);
        return flag;
    }
};