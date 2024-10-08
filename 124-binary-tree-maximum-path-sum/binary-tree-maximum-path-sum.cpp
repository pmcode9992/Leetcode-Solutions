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
    int f(TreeNode* node, int &maxi){
        if(node == NULL){
            return 0;
        }
        int left = max(0, f(node->left, maxi));
        int right = max(0, f(node->right, maxi));
        maxi = max(maxi, left + right + node->val);
        return max(left, right) + node->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        f(root, maxi);
        return maxi;     
    }
};